# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 16:01:00 by bbaatar           #+#    #+#              #
#    Updated: 2022/05/31 16:01:01 by bbaatar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp

OBJS = ${SRCS:.c=.o}
CC		= clang++
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
.c.o:
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:	${NAME}

clean:
		make clean
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
