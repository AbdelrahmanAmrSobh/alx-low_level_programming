#include "main.h"

/**
 * print_to_98 - print num from n to 98
 * @n: input
*/

void print_to_98(int n)
{
	if (n > 98)
		for (; n > 98; n--)
			printf("%d, ", n);
	else
		for (; n < 98; n++)
			printf("%d, ", n);
	printf("98\n");
}
