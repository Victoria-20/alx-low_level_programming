#include <stdio.h>

/**
* set_string - set the value of a pointer to char
* @s: double pointer
* @to: string
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
