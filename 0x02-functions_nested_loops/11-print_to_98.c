#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to test
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
	putchar('\n')
}
