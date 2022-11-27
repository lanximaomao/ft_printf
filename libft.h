#ifndef __LIBFT__H__
# define __LIBFT__H__

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

#include <stdarg.h>

typedef s_printf
{
	va_list	ap;
	char c;
	char* str;
}	t_printf;

int ft_printf(const char *, ...);
#endif

