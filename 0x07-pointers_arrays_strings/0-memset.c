#include <stdio.h>
#include <string.h>

/**
* _memset - fills memory with a constant byte
* @s: memory to be filled
* @b: byte to use
* @n: bytes to be set
* Return: memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
