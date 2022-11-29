#include "ft_printf.h"

int	ft_hexa_deci_x(int n)
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
//	int count;

//	ft_hexa_deci_x(35631);
//	return(0);
//}
