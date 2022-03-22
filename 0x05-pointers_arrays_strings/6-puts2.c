#include "main.h"
#include <string.h>

/**
 * puts2 - updates the value of variable n using pointers
 * @str: int variable to be swapped
 * Return: Always 0
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
