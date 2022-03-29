#include <stdio.h>
#include <string.h>

/**
* _strstr - fills memory with a constant byte
* @haystack: string to be searched
* @needle: substring
* Return: pointer to the beginning of located substring
*/

char *_strstr(char *haystack, char *needle)
{
	char *res = strstr(haystack, needle);

	return (res);
}
