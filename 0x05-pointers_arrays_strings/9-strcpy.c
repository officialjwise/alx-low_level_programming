<<<<<<< HEAD
#include "main.h"
/**
 * _strcpy - Copies a string including the null byte from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return dest_start;
}
=======

>>>>>>> 46b3e9e60f325b1914a619f57255d3822602e2e8
