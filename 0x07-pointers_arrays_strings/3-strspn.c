#include <stdio.h>
#include <string.h>

/**
* _strspn - fills memory with a constant byte
* @s: string
* @accept: prefix substring
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int res = strspn(s, accept);

	return (res);
}
