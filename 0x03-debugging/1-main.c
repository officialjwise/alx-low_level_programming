#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;

/*
* This section of code is commented out to avoid an infinite loop.
* Uncomment it to see the program enter an infinite loop.
*/
/*
while (i < 10)
{
putchar(i);
}
*/

printf("Infinite loop avoided! \\o/\n");
return (0);
}
