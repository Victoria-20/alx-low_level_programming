#include "main.h"

/**
 * _puts - updates the value of variable n using pointers
 * @str: int variable to be swapped
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
