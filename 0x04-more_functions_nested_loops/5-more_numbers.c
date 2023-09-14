#include "main.h"

/**
*more_numbers - print numbers
*
*/

void more_numbers(void)
{
	int x, c;

	x = 0;
	while (x < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			c++;
		}
		_putchar('\n');
		x++;
	}
}
