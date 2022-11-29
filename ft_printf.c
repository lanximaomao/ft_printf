/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:35:03 by lsun              #+#    #+#             */
/*   Updated: 2022/11/29 19:10:52 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int			i;
	int			count;
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
				count += ft_putnbr_ull_fd(va_arg(ap, unsigned long), 1);
				i++;
			}
			else if (str[i + 1] == 'X')
			{
				count += ft_hexa_deci_X(va_arg(ap, int));
				i++;
			}
			else if (str[i + 1] == 'x')
			{
				count += ft_hexa_deci_x(va_arg(ap, int));
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


//int main()
//{
//	ft_printf(" %% ");
//	printf("\n");
//	printf(" %% ");
//	printf("\n");

//	ft_printf(" %%%% ");
//	printf("\n");
//	printf(" %%%% ");
//	printf("\n");


//	//ft_printf("  %%%% ");
//	//printf("\n");
//	//ft_printf("  %%  %%  %%  ");
//	//printf("\n");


//	//printf("usigned u is %u\n", -1);
//	//ft_printf("usigned u is %u", -1);


//	//ft_printf(" NULL %s NULL ", NULL);
//	//printf("\n");
//	//printf(" NULL %s NULL ", NULL);
//	printf("\n");
//}


	//TEST(1, print(" %% "));
	//TEST(2, print(" %%%% "));
	//TEST(3, print(" %% %% %% "));
	//TEST(4, print(" %%  %%  %% "));
	//TEST(5, print(" %%   %%   %% "));
	//TEST(6, print("%%"));
	//TEST(7, print("%% %%"));

	//TEST(24, print(" %u ", LONG_MAX));
	//TEST(25, print(" %u ", LONG_MIN));
	//TEST(26, print(" %u ", UINT_MAX)); OK!!
	//TEST(27, print(" %u ", ULONG_MAX));
	//TEST(28, print(" %u ", 9223372036854775807LL));
	//TEST(29, print(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

	//TEST(6, print(" %p %p ", LONG_MIN, LONG_MAX));
	//TEST(7, print(" %p %p ", INT_MIN, INT_MAX)); OK!!
	//TEST(8, print(" %p %p ", ULONG_MAX, -ULONG_MAX));

	//TEST(1, print("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
