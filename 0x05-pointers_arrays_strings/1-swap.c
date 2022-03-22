#include "main.h"

/**
 * swap_int - updates the value of variable n using pointers
 * @a: int variable to be swapped
 * @b: int variable to be swapped
 */

void swap_int(int *a, int *b)
{
	char emp;

	emp = *a;
	*a = *b;
	*b = emp;
}
