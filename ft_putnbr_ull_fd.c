/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ull_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:34:40 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 19:14:03 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ull_fd(unsigned int n, int fd)
{
	int count;

	count = 1;
	if (n >= 10)
	{
		count += ft_putnbr_ull_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + 48, fd);
	return(count);
}

//int main()
//{
//	int count;
//	count = ft_putnbr_ull_fd(18446744073709551614, 1);
//	printf("\n%d\n", count);
//}
