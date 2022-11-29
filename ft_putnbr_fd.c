/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:30:39 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 11:02:38 by linlinsun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int count;

	count = 1;
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
		count++;
	}
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('0' + 2, fd);
		count += 2;
		n = 147483648;
	}
	if (n >= 10)
	{
		count += ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + 48, fd);
	return(count);
}

//int main()
//{
//	int count;
//	count = ft_putnbr_fd(123, 1);
//	printf("\n%d\n", count);
//}
