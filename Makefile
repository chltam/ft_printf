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
CC := cc
CFLAGS := -Werror -Wextra -Wall
SRCS := ft_printf.c \
		print_char.c \
		print_number.c \
		print_hex.c
OBJS := $(SRCS:.c=.o)
$(NAME): $(OBJS)
		@echo "\033[0;92mMaking libft.a...\033[0;39m"
		make -C libft
		@echo "\033[0;92mCopying libft.a to the current directory and rename it libftprintf.a\033[0;39m"
		cp ./libft/libft.a $(NAME)
		@echo "\033[0;92mAdding extra object file into the libftprintf library\033[0;39m"
		ar -rcs $(NAME) $(OBJS)

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean:
	rm -f ./libft/libft.a ./libft/*.o
	rm -f $(OBJS)
	rm -f $(NAME)
re: fclean all