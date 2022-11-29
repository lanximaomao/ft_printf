/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_deci_X.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:34:48 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 16:34:49 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_deci_X(int n)
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
