#include "variadic_functions.h"


/**
* sum_them_all - returns the sum of all its parameters
* @n: first provided argument
* @...: variadic arguments
* Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;	/* Variable args of data type va_list */
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);	/* Initialize the argument list */

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);	/* Get the next arguments */
	}
	va_end(args);	/* free va_list */
	return (sum);
}
