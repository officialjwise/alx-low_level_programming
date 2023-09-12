#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
for (int i = n; i <= 98; i++)
{
printf("%d%c", i, i < 98 ? ',' : '\n');
}
}
