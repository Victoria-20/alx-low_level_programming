#include "main.h"
#include <ctype.h>
/**
* _isupper - Checks if a character is uppercase
* @c: type char alphabet
* Return: 1 if uppercase, 0 if not
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
