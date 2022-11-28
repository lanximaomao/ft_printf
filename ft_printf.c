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
			else if (str[i + 1] == 'd'|| str[i + 1] == 'i' ) // int
			{
				num = va_arg(ap, int);
				ft_putnbr_fd(num, 1);
				count += ft_digit_num(num);
				//printf("%d", count);
				i++;
			}
			else if (str[i + 1] == 'u') // int
			{
				num = va_arg(ap, int);

				if (num < 0)
					return(0);
				ft_putnbr_fd(num, 1);
				count += ft_digit_num(num);
				i++;
			}
			//else if (str[i + 1] == 'X')
			//	ft_puthex_A(ap);
			//else if (str[i + 1] == 'x')
			//	ft_puthex_a(ap);
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

int main()
{
	char c = 'a';
	int count;
	int t_int;

	t_int = -22;

	count = ft_printf("%u\n", t_int);
	printf("count is %d\n", count);
	return(0);
}
