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
LIBFT := libft
CC := cc
CFLAGS := -Werror -Wextra -Wall
SRCS := ft_printf.c \
		print_char.c \
		print_number.c \
		print_hex.c
OBJS := $(SRCS:.c=.o)
$(NAME): $(OBJS)
		@echo "\033[0;92mMaking libft.a...\033[0;39m"
		make -C $(LIBFT)
		@echo "\033[0;92mCopying libft.a to the current directory and rename it libftprintf.a\033[0;39m"
		cp ./libft/libft.a $(NAME)
		@echo "\033[0;92mAdding extra object files into the libftprintf library\033[0;39m"
		ar -rcs $(NAME) $(OBJS)
		@echo "\033[0;92mlibftprintf.a compiled.\033[0;039m"
		

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean:
	make fclean -C libft
	@echo "\033[0;92mlibft object file cleaned\033[0;39m"
	rm -f $(OBJS)
	@echo "\033[0;92mft_printf object file cleaned\033[0;39m"
	rm -f $(NAME)
re: fclean all