# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htam <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 19:12:42 by htam              #+#    #+#              #
#    Updated: 2022/12/28 19:12:44 by htam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME := libftprintf.a
FLAGS := -Werror -Wextra -Wall
files := *.c

$(NAME):
		gcc $(FLAGS) -c $(files)
		ar -rcs $(NAME) *.o

all: $(NAME)
clean:
	rm -f *.o
fclean:
	rm -f *.o
	rm -f libftprintf.a
re: fclean all