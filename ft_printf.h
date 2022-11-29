/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:16:30 by linlinsun         #+#    #+#             */
/*   Updated: 2022/11/29 19:37:37 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H_
# define FT_PRINTF_H_

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

//typedef int	ft_ops(char *, ap);

//typedef s_printf
//{
//	char[];
//	ft_ops *ops;
//}
//t_printf;

//void	ft_assign(void)
//{
//	t_printf	new;

//	str[0][0] = '%';
//	str[0][1] = 'c';
//	str[0][2] = '\0';
//}

int	ft_printf(const char *str, ...);
int ft_hexa_deci_X(unsigned int n);
int ft_hexa_deci_x(unsigned int n);
int	ft_putnbr_ull_fd(unsigned int n, int fd);
int ft_print_ptr(unsigned long long n);

#endif
