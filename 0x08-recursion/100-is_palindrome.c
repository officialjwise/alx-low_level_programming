#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if it's a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}

	return (1);
}

int main(void)
{
	char str1[] = "racecar";
	char str2[] = "hello";

	printf("Is 'racecar' a palindrome? %d\n", is_palindrome(str1));
	printf("Is 'hello' a palindrome? %d\n", is_palindrome(str2));

	return (0);
}
