#include <unistd.h>
#include <string.h>
#include <sys/types.h>

#define END 1;
#define PIPE 2;
#define SEP 3;

typedef struct s_a {
    char **env;
    char **argv;
    int pipe_fd[2];
    int type;
    int type_before;
    int pipe_before;
} t_a;

void putstr_fd(char *str, int fd) {
    
    int i = 0;

    while(str && str[i])
    {
        write (fd, &str[i], 1);
        i++;
    }
}

int error_int (char *str1, char *str2){
    putstr_fd("error: ", 2);
    putstr_fd(str1, 2);
    putstr_fd(str2, 2);
    putstr_fd("\n", 2);
    return (1);
}

int execution(t_a *a)
{
    pid_t pid;

    // if (a->type == PIPE)
    //     if (pipe())
    pid = fork ();
    if (pid < 0)
        return (error_int("fatal", NULL));
    if (pid == 0) //child process
    {
        //grep Microshell | echo Microshell
        if (a->type_before == 2)
            if(dup2(a->pipe_before, 0) < 0)
                error_int("fatal", NULL);
        if (a->type == 2)
            if (dup2(a->pipe_fd[1], 1) < 0)
                error_int("fatal", NULL);
        if(execve(a->argv[0], a->argv, a->env) == -1)
        {
            error_int("cannor execute ", a->argv[0]);
            exit(1);
        }
    }
    else //parent process
    {
        waitpid(pid, 0, 0);
        if (a->type_before == 2)
            close (a->pipe_before);
        if (a->type_before == 2 && a->type != 2)
            close (a->pipe_fd[0]);
        if (a->type == 2)
            close (a->pipe_fd[1]);
    }
    return (0);
}

int parsing(t_a *a, char *argv[])
{
    int i = 0;

    a->argv = argv;
    a->type_before = a->type;
    a->pipe_before = a->pipe_fd[0];
    // grep Microshell | echo Microshell blabla
    while(argv[i])
    {
        if (strcmp(argv[i], "|") == 0)
        {
            a->type = PIPE;
            argv[i] = NULL;
            return (i);
        }
        if (strcmp(argv[i], ";") == 0)
        {
            a->type = SEP;
            argv[i] = NULL;
            return i;
        }
        i++;
    }
    a->type = END;
    return (i);
}

int main(int argc, char *argv[], char *env[])
{
    int moving;
    int i = 1;
    int ret = 0;
    t_a a;

    // if (argc < 2)
    // {
    //     write ("Enter the command and arguments\n", 28);
    // }
    a.env = env;
    a.type = END;
    a.pipe_fd[0] = 0;
    a.pipe_fd[1] = 1;
    while (i < argc && argv[i] != NULL)
    {
        moving = parsing(&a, &argv[i]);
        if (moving != 0)
        {
            if (strcmp(argv[i], "cd") == 0)
                ret = cd(&a);
            else
                ret = execution(&a);
        }
        i += (moving + 1);
    }
    return ret;
}

// //   #include <sys/types.h>
// //   #include <unistd.h>
// //   #include <stdio.h>

// //   int   main()
// //   {
// //      pid_t pid;
// //      char *const parmList[] = {"/bin/ls", "-l", "../Module_00", NULL};

// //      if ((pid = fork()) == -1)
// //         perror("fork error");
// //      else if (pid == 0) {
// //         execv("/bin/ls", parmList);
// //         printf("Return not expected. Must be an execv error.n");
// //      }
// //   }

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <sys/types.h>
// #include <sys/stat.h>
// #include <fcntl.h>

// int main(void) {
//   int number1, number2, sum;
 
//   int input_fds = open("./input.txt", O_RDONLY);
//   int output_fds = open("./output.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
 
//   dup2(input_fds, 0);
//   dup2(output_fds, 1);
//   scanf("%d %d", &number1, &number2);
//   sum = number1 + number2;
//   printf("%d + %d = %d\n", number1, number2, sum);
 
//   return EXIT_SUCCESS;
// }