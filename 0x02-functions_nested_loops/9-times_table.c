#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void)
{
int row, column, result;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
result = row * column;

if (column > 0)
_putchar(','); /* Print a comma before the number */

/* Print the result with proper formatting */
if (result < 10)
_putchar(' '); /* Add a space for single-digit results */
else
_putchar((result / 10) + '0'); /* Print the tens digit */

_putchar((result % 10) + '0'); /* Print the ones digit */
}
_putchar('\n'); /* Print a newline at the end of each row */
}
}
