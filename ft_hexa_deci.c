/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_deci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:34:52 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 19:38:14 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_deci_X(unsigned int n)
{
	int	temp;
	int	count;

	count = 1;
	if (n / 16 > 0)
	{
		count += ft_hexa_deci_X(n / 16);
	}
	temp = n % 16;
	if (temp > 9)
		temp = temp - 10 + 'A';
	else
		temp += '0';
	ft_putchar_fd(temp, 1);
	return (count);
}

int	ft_hexa_deci_x(unsigned int n)
{
	int	temp;
	int	count;

	count = 1;
	if (n / 16 > 0)
	{
		count += ft_hexa_deci_x(n / 16);
	}
	temp = n % 16;
	if (temp > 9)
		temp = temp - 10 + 'a';
	else
		temp += '0';
	ft_putchar_fd(temp, 1);
	return (count);
}

//int main()
//{

//	ft_hexa_deci_x(-1);
//	write(1, "\n", 1);
//	printf("%X\n", -1);
//	return(0);
//}
