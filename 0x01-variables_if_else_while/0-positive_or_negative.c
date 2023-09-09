#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	/* Seed the random number generator */
	srand(time(0));
	/* Generate a random number and store it in 'n' */
	n = rand() - RAND_MAX / 2;
	/* Print the number and its sign */
	printf("%d is", n);
	if (n > 0)
	{
		printf(" positive\n");
	}
	else if (n == 0)
	{
		printf(" zero\n");
	}
	else
	{
		printf(" negative\n");
	}
	return (0);
}
