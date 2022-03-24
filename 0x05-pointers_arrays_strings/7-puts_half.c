#include "main.h"


/**
 * puts_half - updates the value of variable n using pointers
 * @str: int variable to be swapped
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
	_putchar (str[i]);
	}

	_putchar ('\n');

}
