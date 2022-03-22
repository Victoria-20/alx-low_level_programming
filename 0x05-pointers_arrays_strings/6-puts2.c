#include "main.h"
#include <string.h>

/**
 * puts2 - updates the value of variable n using pointers
 * @str: int variable to be swapped
 * Return: Always 0
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
