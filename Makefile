# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:48:08 by linlinsun         #+#    #+#              #
#    Updated: 2022/11/29 18:00:46 by lsun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_hexa_deci.c ft_print_ptr.c ft_putnbr_ull_fd.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):libft
	cc $(CFLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

libft:
	make -C ./libft all
	make -C ./libft bonus
	cp libft/libft.a $(NAME)

clean:
	make -C ./libft clean
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	make -C ./libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
