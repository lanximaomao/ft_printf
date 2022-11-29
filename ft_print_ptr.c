#include "printf.h"

int ft_print_ptr()
{
	int count;

	count = 0;
	int *p = &count;
	ft_hexa_deci((int)p);
	return (count);
}

int main ()
{}

