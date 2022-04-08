#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	/* create new memory space */
	ptr = malloc(b);

	/* check if new memory has been allocated */
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
