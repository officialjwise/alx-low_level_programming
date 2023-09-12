#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
unsigned long int a = 1, b = 2, next;
int count;

printf("%lu, %lu", a, b);

for (count = 3; count <= 98; count++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}

printf("\n");
}

int main(void)
{
print_fibonacci();
return (0);
}
