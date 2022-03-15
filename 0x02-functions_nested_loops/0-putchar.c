#include "main.h"

/**
* main - Prints string _putchar
* Description: Do not use standard libraries
* Return: Always 0 (Success)
*/

int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);

}
