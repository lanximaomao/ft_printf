# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:48:08 by linlinsun         #+#    #+#              #
#    Updated: 2022/11/29 11:13:55 by linlinsun        ###   ########.fr        #
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


clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
