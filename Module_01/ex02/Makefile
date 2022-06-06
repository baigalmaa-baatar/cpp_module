# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 16:01:50 by bbaatar           #+#    #+#              #
#    Updated: 2022/05/31 16:01:52 by bbaatar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
SRCS = main.cpp\

OBJS	= $(SRCS:.cpp=.o)
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all		:	$(NAME)

.cpp.o	:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

sani	:	$(OBJS)
		$(CC) $(CFLAGS) -fsanitize=address $(OBJS) -o $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:
			$(RM) $(NAME) $(OBJS)

re		: fclean all

.PHONY	: all clean fclean re
