#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string whose length we need
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == 0)
	{
		return (0);
	}
	else
	{
	length = _strlen_recursion(s + 1);
	return (length + 1);
	}

}
