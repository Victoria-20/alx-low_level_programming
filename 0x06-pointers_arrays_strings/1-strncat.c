#include "main.h"
#include <string.h>

/**
* _strncat - concatenates by appending 2 strings together
* @dest: destination string
* @src: source string
* @n: number of bytes
* Return: 0 if successfull
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
