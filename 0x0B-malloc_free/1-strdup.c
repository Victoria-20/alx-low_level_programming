#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	/* Determine the length of the string*/
	len = strlen(str);

	/* Check for string */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Allocate new memory */
	ptr = malloc(len + 1);

	/* if insufficient memory, return NULL*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		/*copy string str to ptr*/
		strcpy(ptr, str);
		return (ptr);
	}

}
