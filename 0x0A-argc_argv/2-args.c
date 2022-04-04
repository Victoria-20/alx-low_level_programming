#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: counts number of arguments on the command line
 * @argv: array of pointer to the arguments passed(strings)
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
