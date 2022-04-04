#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program that prints its name
 * @argc: counts number of arguments on the command line
 * @argv: array of pointer to the arguments passed(strings)
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
	}
	return (0);
}
