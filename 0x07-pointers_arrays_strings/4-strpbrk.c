#include <stdio.h>
#include <string.h>

/**
* _strpbrk - fills memory with a constant byte
* @s: string to be searched
* @accept: bytes
* Return: pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	char *res = strpbrk(s, accept);

	return (res);
}
