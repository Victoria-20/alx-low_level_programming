#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character c
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	/* check if size = 0 */
	if (size == 0)
	{
		return (NULL);
	}

	/*create new memory loaction of size char */
	ptr = (char *)malloc(size * sizeof(char));

	/* check if memory has been allocated */
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		/*copy elements of c to array */
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	return (ptr);
}
