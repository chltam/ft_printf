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
files := ft_printf \
		print_char \
		print_number \
		print_hex

$(NAME): $(SCRS:%=%.c)
		cp ./libft/libft.a libftprintf.a
		cc $(FLAGS) -c $(files:%=%.c)
		ar -rcs $(NAME) $(files:%=%.o)

all: $(NAME)
clean:
	rm -f $(files:%=%.o)
fclean:
	rm -f $(files:%=%.o)
	rm -f $(NAME)
re: fclean all