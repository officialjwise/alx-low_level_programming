#include "main.h"

/**
* print_times_table - prints the 9 times table starting with 0
* @n: times table
* Return: 0 if success
*/

void print_times_table(int n)
{
int row, column, result;
if (n < 0 || n > 15)
return;

for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
result = row * column;
if (column == 0)
{
_putchar('0' + result);
}
else if (result < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
else if (result < 100)
{
_putchar(' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
else
{
_putchar('0' + result / 100);
_putchar('0' + (result - 100) / 10);
_putchar('0' + result % 10);
}

if (column < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
