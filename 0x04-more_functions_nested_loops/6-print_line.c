#include "main.h"

/**
*print_line - print a line
*@n: number of underscores
*
*/

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
		_putchar('_');
	_putchar('\n');
}
