#include "libft.h"

static int ft_num_argc(const char* str)
{
	int num_argc;

	num_argc = 0;
	while (*str != '\0')
	{
		if (*str == '%')
			num_argc++;
		str++;
	}
	return(num_argc);
}

/* what if str is empty*/

int ft_printf(const char *str, ...)
{
	int	count;
	int	num_argc;

	if (!str)
		return (0); // error msg?
	num_argc = ft_num_argc(str);
	if (num_argc == 0)
	{
		ft_putstr(str);
		return (ft_strlen(str))
	}
	va_list argc; // argument parameter
	va_start(argc, char *);

	//while (*str)
	//{
	//	if (*str == '%')
	//	{
	//		if (*(str + 1) == 'd')
	//			ft_printf_d ();
	//		if (*(str + 1) == 's')
	//			ft_printf_s ();
	//		if (*(str + 1) == 'i')
	//			ft_printf_i ();
	//		if (*(str + 1) == 'u')
	//			ft_printf_u ();
	//		if (*(str + 1) == 'X')
	//			ft_printf_X ();
	//		if (*(str + 1) == 'x')
	//			ft_printf_x ();
	//	}
	//	str++;
	//}



	//va_end (ap);

}


