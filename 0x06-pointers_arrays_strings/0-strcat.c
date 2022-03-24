#include "main.h"
#include <string.h>

/**
* _strcat - concatenates by appending 2 strings together
* @dest: destination string
* @src: source string
* Return: 0 if successfull
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
