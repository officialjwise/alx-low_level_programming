#include "main.h"

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @i: The start index.
 * @len: The length of the string.
 *
 * Return: 1 if it's a palindrome, 0 if it's not.
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if it's a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
