#include "ft_printf.h"

/*
** u for unsigned decimal number, what if unput is negative?
*/

int	main(void)
{
	int		i;
	int		j;
	int		a;
	int		*p;
	int		**pp;

	char s1[] = "hello";
	char s2[] = "world";
	j = 1234;
	//i = printf("d %d\n", 5);
	//i = printf("hello %d world\n", j);
	//printf("d %d\n", -1235);
	//printf("i %i\n", -59796);
	//printf("u: %u\n", -1); // if input is negative..
	//printf("X %X\n", 200);
	//printf("x %x\n", 200);
	printf("%p\n", (void *)35631);
	printf("%p\n", s1);
	//printf("%u\n", s1);
	ft_hexa_deci_X(s1, 0);
	//printf("%x\n", s1);

	//int a = 10;
	//int *p = &a;
	//int **pp = &p;
	//printf("%u", &p);
	//return (0);
	i = printf("%s\n", NULL);
	printf("%d\n", i);
}
