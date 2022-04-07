#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	/* check if size b = 0 */
	if (b == 0)
	{
		return (NULL);
	}
	/* create new memory space */
	ptr = malloc(b);

	/* check if new memory has been allocated */
	if (ptr == 0)
	{
		return (NULL);
	}
	return (ptr);
}
