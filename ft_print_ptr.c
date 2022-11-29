/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:34:44 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 17:13:20 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar_fd(char c, int fd);

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

int ft_print_ptr(unsigned long long n)
{
	int count;

	count = 2;
	ft_putchar_fd('0', 1);
	ft_putchar_fd('X', 1);
	count += ft_hexa_deci_X(n);
	return (count);
}


//int main()
//{
//	char s1[] = "hello";
//	printf("%p\n", (void *)123);
//	ft_print_ptr((unsigned long long)(123));
//}
