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
SCRS := ft_printf \
		print_char \
		print_number \
		print_hex


$(NAME):
		gcc $(FLAGS) -c $(SCRS:%=%.c)
		ar -rcs $(NAME) $(SRCS:%=%.o)

all: $(NAME)
clean:
	rm -f $(SRCS:%=%.o)
fclean:
	rm -f $(SRCS:%=%.o)
	rm -f $(NAME)
re: fclean all