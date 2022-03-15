#include "main.h"

/**
* print_last_digit - Print sign of a number
* @n: interger type
* Return: last digit
*/

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
