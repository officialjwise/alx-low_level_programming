#include "main.h"

/**
*print_triangle - print triangle
*@size: only parameter
*
*/

void print_triangle(int size)
{
	int x, y, z;

	for (x = 1; x <= size; x++)
	{
		for (z = size - x; z != 0; z--)
			_putchar(' ');
		for (y = 1; y <= x; y++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
