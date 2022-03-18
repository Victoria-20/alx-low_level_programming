#include "main.h"
#include <stdio.h>
/**
* print_numbers - Print numbers from 0 - 9
*
* Return: 0 if successful
*/
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
