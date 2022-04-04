#include "main.h"
#include <stdio.h>

/**
 * main - program that prints number of arguments passed into it
 * @argc: counts number of arguments on the command line
 * @argv: array of pointer to the arguments passed(strings)
 * Return: 0 if successfull
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
