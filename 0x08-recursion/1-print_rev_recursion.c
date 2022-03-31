#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse followed by a new line
 * @s: string to ba printed
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	else
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}

}
