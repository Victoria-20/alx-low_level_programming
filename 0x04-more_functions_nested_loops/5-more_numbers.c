#include "main.h"

/**
* more_numbers - Prints numbers 10 times
*
* Return: 0 if successful
*/
void more_numbers(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		for (j = '0'; j < '9'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}

}
