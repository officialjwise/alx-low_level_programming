#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 1 (error)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 59;
if (write(2, message, len) != len)
return (1);
return (EXIT_SUCCESS);
}
