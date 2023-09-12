#include <stdio.h>
#include <stdlib.h>

/**
 * main - corps of the program
 * Description: computes and prints the sum of all the multiples of 3 amd 5
 * Return: 0 if success
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%i\n", sum);
	return (0);
}
