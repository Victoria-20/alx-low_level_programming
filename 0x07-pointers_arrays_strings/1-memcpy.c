#include <stdio.h>
#include <string.h>

/**
* _memcpy - copy memory area
* @dest: destination area
* @src: source area
* @n: size to be copied
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
