/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:35:03 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 19:49:24 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ap;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
			{
				count += ft_putchar_fd(va_arg(ap, int), 1);
				i++;
			}
			else if (str[i + 1] == 's')
			{
				count += ft_putstr_fd(va_arg(ap, char *), 1);
				i++;
			}
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
			{
				count += ft_putnbr_fd(va_arg(ap, int), 1);
				i++;
			}
			else if (str[i + 1] == 'u')
			{
				count += ft_putnbr_ull_fd(va_arg(ap, unsigned long), 1);
				i++;
			}
			else if (str[i + 1] == 'X')
			{
				count += ft_hexa_deci_big(va_arg(ap, int));
				i++;
			}
			else if (str[i + 1] == 'x')
			{
				count += ft_hexa_deci_small(va_arg(ap, int));
				i++;
			}
			else if (str[i + 1] == 'p')
			{
				count += ft_print_ptr(va_arg(ap, unsigned long long));
				i++;
			}
			else if (str[i + 1] == '%')
			{
				count += ft_putchar_fd('%', 1);
				i++;
			}
		}
		else
		{
			count += ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (count);
}
