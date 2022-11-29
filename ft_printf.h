/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:16:30 by linlinsun         #+#    #+#             */
/*   Updated: 2022/11/29 19:48:28 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_hexa_deci_big(unsigned int n);
int	ft_hexa_deci_small(unsigned int n);
int	ft_putnbr_ull_fd(unsigned int n, int fd);
int	ft_print_ptr(unsigned long long n);

#endif
