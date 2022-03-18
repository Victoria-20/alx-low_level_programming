#include "main.h"

/**
* print_triangle - Prints numbers 10 times
* @size: integer, number of times character will appear
* Return: 0 if successful
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		{
			_putchar(' ');
		}
		for (j--; j < size; j++)
		{
			_putchar(35);
		}
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
