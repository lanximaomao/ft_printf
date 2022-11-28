#include "ft_printf.h"

/*
** u for unsigned decimal number, what if unput is negative?
*/

int	main(void)
{
	int i;
	int j;

	j = 1234;

	//i = printf("d %d\n", 5);
	//i = printf("hello %d world\n", j);
	//printf("d %d\n", -1235);
	//printf("i %i\n", -59796);
	printf("u: %u\n", -1); // if input is negative..
	//printf("X %X\n", 200);
	//printf("x %x\n", 200);
	return(0);
}
