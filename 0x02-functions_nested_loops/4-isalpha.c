#include "main.h"
#include "ctype.h"

/**
* _isalpha - Return 1 if alphabet is lower case, 0 if not
* @c: char type alphabet
* Return: 1 if lowercase, 0 if not
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
