#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: None.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2; // Increment by 2 to skip every other character
}

_putchar('\n');
}
