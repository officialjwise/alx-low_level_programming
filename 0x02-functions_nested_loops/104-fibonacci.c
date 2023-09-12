#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
unsigned long int a = 1, b = 2, next;
int i;

printf("%lu, %lu", a, b);

for (i = 2; i < 98; i++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}

printf("\n");
return (0);
}
