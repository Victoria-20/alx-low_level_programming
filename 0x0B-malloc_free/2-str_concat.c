#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - creates an array of chars
 * @s1: pointer to string 1
 * @s2: pointer to string 2
* Return: newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, size;

	/*check if arrays are empty */
	if (s1 == NULL)
	{
		s1 = ""
	}
	if (s2 == NULL)
	{
		s2 = ""
	}

	/* calculate total size of arrays */
	size = (strlen(s1) + strlen(s2) + 1)

	/* allocate new memory */
	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}
	/* Concatenate the strings*/
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(ptr + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}

	return (ptr);
}
}
