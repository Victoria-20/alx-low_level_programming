#include <stdio.h>
#include <string.h>

/**
* _strchr - locates a charcter in a string
* @s: string s
* @c: character to be located
* Return: pointer to the first occurrence of the character
*/

char *_strchr(char *s, char c)
{
	/* using the strchr function*/
	char *res = strchr(s, c);

	return (res);

}
