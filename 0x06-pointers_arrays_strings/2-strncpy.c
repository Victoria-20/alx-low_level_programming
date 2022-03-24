#include "main.h"
#include <string.h>

/**
* _strncpy - concatenates by appending 2 strings together
* @dest: destination string
* @src: source string
* @n: number of bytes
* Return: 0 if successfull
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
