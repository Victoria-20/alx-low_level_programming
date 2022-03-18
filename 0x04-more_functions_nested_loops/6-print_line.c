#include "main.h"

/**
* print_line - Prints numbers 10 times
* @n: integer, number of times character will appear
* Return: 0 if successful
*/
void print_line(int n)
{
	int line = n;

	for (line = n; line > 0; line--)
	{
		_putchar('_');
	}
	_putchar('\n');

}
