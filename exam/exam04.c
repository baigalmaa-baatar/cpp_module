#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <string.h>

#define END 1
#define PIPE 2
#define SEP 3

typedef struct s_a {
	char **env;
	char **argv;
	int pipe_fd[2];
	int type;
	int type_before;
	int pipe_before;
}	t_a;

void putstr_fd(char *str, int fd) {
	int i = 0;

	while (str && str[i]) {
		write(fd, &str[i], 1);
		i++;
	}
}

int error_int(char *s1, char *s2) {
	putstr_fd("error: ", 2);
	putstr_fd(s1, 2);
	putstr_fd(s2, 2);
	putstr_fd("\n", 2);
	return 1;
}

int execution(t_a *a) {
	pid_t pid;

	if (a->type == PIPE)
		if (pipe(a->pipe_fd) < 0)
			return (error_int("fatal", NULL));
	pid = fork();
	if (pid < 0)
		return error_int("fatal", NULL);
	if (pid == 0) { //child
		if (a->type_before == PIPE)
			if (dup2(a->pipe_before, 0) < 0)
				return (error_int("fatal", NULL));
		if (a->type == PIPE)
			if (dup2(a->pipe_fd[1], 1) < 0)
				return (error_int("fatal", NULL));
		if (execve(a->argv[0], a->argv, a->env) < 0) {
			error_int("cannot execute ", a->argv[0]);
			exit(1);
		}
	}
	else { //parent
		waitpid(pid, 0, 0);
		if (a->type_before == PIPE)
			close(a->pipe_before);
		if (a->type_before == PIPE && a->type != PIPE)
			close(a->pipe_fd[0]);
		if (a->type == PIPE)
			close(a->pipe_fd[1]);
	}
	return 0;
}

int cd(t_a *a) {
	int i = 0;

	while (a->argv[i])
		i++;
	if (i != 2)
		return error_int("cd: bad arguments", NULL);
	if (chdir(a->argv[1]) == -1)
		return error_int("cd: cannot change directory to ", a->argv[1]);
	return 0;
}

int parsing(t_a *a, char **argv) {
	int i = 0;

	a->argv = argv;
	a->type_before = a->type;
	a->pipe_before = a->pipe_fd[0];
	while (argv[i]) {
		if (strcmp(argv[i], "|") == 0) {
			a->type = PIPE;
			argv[i] = NULL;
			return (i);
		}
		if (strcmp(argv[i], ";") == 0) {
			a->type = SEP;
			argv[i] = NULL;
			return (i);
		}
		i++;
	}
	a->type = END;
	return (i);
}

int main(int argc, char **argv, char **env) {
	t_a a;
	int i = 1;
	int moving;
	int ret = 0;
	
	a.env = env;
	a.type = END;
	a.pipe_fd[0] = 0;
	a.pipe_fd[1] = 1;
	while (i < argc && argv[i]) {
		//Parse an argument by an argument
		moving = parsing(&a, &argv[i]);
		if (moving != 0) {
			if (strcmp(argv[i], "cd") == 0)
				ret = cd(&a);
			else
				ret = execution(&a);
		}
		i += (moving + 1);
	}
	return ret;
}
