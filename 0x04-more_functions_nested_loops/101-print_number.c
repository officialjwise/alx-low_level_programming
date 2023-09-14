#include "main.h"

/**
*print_number - Print number using _putchar
*@n: parameter
*
*/


void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}

