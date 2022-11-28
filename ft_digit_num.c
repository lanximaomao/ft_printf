/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:47 by lsun              #+#    #+#             */
/*   Updated: 2022/11/28 12:00:55 by linlinsun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digit_num(long int n)
{
	int	digit;

	digit = 1;
	if (n < 0)
	{
		digit++;
		n = n * (-1);
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}
