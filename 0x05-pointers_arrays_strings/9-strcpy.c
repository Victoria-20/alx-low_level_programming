#include "main.h"
#include <string.h>

/**
 * print_rev - updates the value of variable n using pointers
 * @s: int variable to be swapped
 * Return: Always 0
 */

void print_rev(char *s)
{
	_putchar(strrev(*s));
	_putchar('\n');
}
