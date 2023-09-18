#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: None.
 */
void puts_half(char *str)
{
int length = 0;
int start;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Determine the starting index for the second half */
start = (length + 1) / 2;

/* Print the second half of the string */
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}
