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

NAME = ex01
SRCS = main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		Brain.cpp

OBJS	= $(SRCS:.cpp=.o)
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

all		:	$(NAME)

.cpp.o	:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAGS) -g3 $(OBJS) -o $(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:
			$(RM) $(NAME) $(OBJS)

re		: fclean all

.PHONY	: all clean fclean re
