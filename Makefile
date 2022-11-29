# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:48:08 by linlinsun         #+#    #+#              #
#    Updated: 2022/11/29 16:30:31 by lsun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_*.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
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
