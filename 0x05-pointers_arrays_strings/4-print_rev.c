#include "main.h"
#include <string.h>

/**
 * print_rev - updates the value of variable n using pointers
 * @s: int variable to be swapped
 * Return: Always 0
 */

void print_rev(char *s)
{
	char *start = s;

	while (*start != '\0')
	{
		start++;
	}
	while (start != s)
	{
		start--;
		_putchar(*start);
	}
	_putchar('\n');
}
