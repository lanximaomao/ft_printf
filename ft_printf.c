/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:35:03 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 16:35:04 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int			i;
	int			count;
	int	num;
	va_list	ap;

	if (!str)
		return (0); // error msg?
	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c') // int
			{
				count += ft_putchar_fd(va_arg(ap, int), 1);
				i++;
			}
			else if (str[i + 1] == 's') // char *
			{
				count += ft_putstr_fd(va_arg(ap, char*), 1);
				i++;
			}
			else if (str[i + 1] == 'd'|| str[i + 1] == 'i') // int
			{
				count += ft_putnbr_fd(va_arg(ap, int), 1);
				i++;
			}
			else if (str[i + 1] == 'u') // int
			{
				num = va_arg(ap, int);

				if (num < 0)
					return(0);

				count += ft_putnbr_fd(num, 1);
				i++;
			}
			else if (str[i + 1] == 'X')
				count += ft_hexa_deci_X(va_arg(ap, int));
			else if (str[i + 1] == 'x')
				count += ft_hexa_deci_x(va_arg(ap, int));
			//else if (str[i + 1] == 'p')
			//	ft_putptr(ap);
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

//int main()
//{
//	char c = 'a';
//	int count;
//	int t_int;

//	t_int = -22;

//	count = ft_printf("%d\n", t_int);
//	printf("count is %d\n", count);
//	return(0);
//}

int main()
{
	ft_printf("hello %s\n", "world");
	ft_printf("hello %s\n", NULL);
	ft_printf(" NULL %s NULL ", NULL);
	printf("\n");
	printf(" NULL %s NULL ", NULL);
	printf("\n");
}
