#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @start: start range from 
 * @end: end range at
 * Return: Pointer to array
 */

int *array_range(int start, int end)
{
	int *ptr;
	int i;
	int n = (end - start + 1);

	if (start > end)
	{
		return (NULL);
	}

	/* Let's check for error using malloc */
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	/* setting the range values */
	for (i = 0; i < n; i++)
	{
		ptr[i] = start++;
	
	return (ptr);
	}
}
