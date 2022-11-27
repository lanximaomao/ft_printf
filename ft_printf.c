#include "libft.h"
#include "printf.h"

int	ft_printf(const char *str, ...)
{
	int			i;
	int			count;
	var_list	ap;

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
				count += ft_putchar_fd(ap, 1);
			else if (str[i + 1] == 's') // char *
				count += ft_putstr_fd(ap, 1);
			else if (str[i + 1] == 'd') // int
				count += ft_putnum_d(ap, 1);
			else if (str[i + 1] == 'i') //int
				count += ft_putnum_i(ap);
			else if (str[i + 1] == 'u') // unsigned int
				count += ft_putnum_u(ap);
			else if (str[i + 1] == 'X')
				count += ft_puthex_A(ap);
			else if (str[i + 1] == 'x')
				count += ft_puthex_a(ap);
			else if (str[i + 1] == 'p')
				count += ft_putptr(ap);
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(ap);
	return (count);
}

// recursion? //ABCDEF?
int	ft_puthex_A(va_list ap, int fd)
{
	int	count;
	int ret; // what type?

	fd = 1;
	count = 0;
	if (num / 16 != 0)
	{
		num = num / 16;
		ft_puthex_A(num, fd);
	}
	write(1, 'num % 16', 1);
	count++;
	return (count);
}
