#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* isNumeric - Check if a string is composed of digits.
* @str: The input string to check.
* Return: 1 if composed of digits, 0 otherwise.
*/
int isNumeric(const char *str)
{
while (*str)
{
if (!isdigit(*str))
return 0;
str++;
}
return 1;
}

/**
* multiply - Multiply two numbers.
* @num1: The first number.
* @num2: The second number.
* Return: The result of the multiplication.
*/
int multiply(int num1, int num2)
{
return num1 * num2;
}

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return 98;
}

if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
{
printf("Error\n");
return 98;
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2);

int result = multiply(num1, num2);
printf("%d\n", result);

return 0;
}
