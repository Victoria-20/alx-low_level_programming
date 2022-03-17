#include "main.h"
#include <ctype.h>
/**
* _isdigit - Checks if a character is uppercase
* @c: type char alphabet
* Return: 1 if uppercase, 0 if not
*/
int _isdigit(int c)
{
	for (c = 0; c < 10; c++)
	{
		if (isdigit(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	_putchar('\n');
}
