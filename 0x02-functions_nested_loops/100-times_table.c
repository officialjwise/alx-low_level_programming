#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The limit for the times table (0 to 15)
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int row, column, result;

for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
result = row * column;

if (column == 0)
{
printf("%d", result);
}
else
{
printf(", %d", result);
}
}
printf("\n");
}
}
}
