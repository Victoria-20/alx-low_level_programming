#include "variadic_functions.h"


/**
* print_numbers - prints numbers
* @separator: string to be printed between numbers
* @n: first provided argument
* @...: variadic arguments
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;	/* Variable args of data type va_list */
	unsigned int i;

	va_start(args, n);	/* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));	/* Get the next arguments */

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);	/* free va_list */
}
