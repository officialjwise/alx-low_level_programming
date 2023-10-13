#include <stlib.h>
#include "main.h"

/**
 * malloc_checked function - allocate a memory
 * Size for maloc
 * Return a pointer to allocated memory 
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
		return (ptr);
	}
}
