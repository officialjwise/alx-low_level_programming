#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the specified message to the standard error.
 *
 * Return: Always 1 (error)
 */
int main(void)
{
char message[] = "and that piece of art is useful\"\n - Dora Korpar, 2015-10-19";
ssize_t len = sizeof(message) - 1;
if (write(2, message, len) != len)
return (1);
return (1);
}
