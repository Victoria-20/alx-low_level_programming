#include "main.h"

/**
* print_alphabet - Prints alphabets in lower case
* Description: Only use _putchar twice in your code
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

}
