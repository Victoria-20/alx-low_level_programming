#include "main.h"

/**
* print_alphabet_x10 - Prints alphabets in lower case
* Description: Only use _putchar twice in your code
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}

}
