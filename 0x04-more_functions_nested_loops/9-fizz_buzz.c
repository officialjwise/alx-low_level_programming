#include <stdio.h>

/**
*main - Program Entry
*
*Return: 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("%s", "Fizz");
		if (x % 5 == 0)
			printf("%s", "Buzz");
		if (!(x % 3 == 0 || x % 5 == 0))
			printf("%d", x);
		if (x < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
