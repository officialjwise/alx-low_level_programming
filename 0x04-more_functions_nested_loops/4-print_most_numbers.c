<<<<<<< HEAD
#include "main.h"

/**
*print_most_numbers - print numbers
*
*
*/

void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if (c == 50 || c == 52)
		{
			c++;
			continue;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
=======
#include "main.h"

/**
*print_most_numbers - print numbers
*
*
*/

void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if (c == 50 || c == 52)
		{
			c++;
			continue;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
>>>>>>> 6708832d3d79a80fdbbf07d15ef7ccafff2eec58
