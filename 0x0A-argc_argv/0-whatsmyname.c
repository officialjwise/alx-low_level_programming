#include <stdio.h>

/**
*main - Printing the name of the file
*@argc: argument count
*@argv: argument variable
*
*Return: Success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
