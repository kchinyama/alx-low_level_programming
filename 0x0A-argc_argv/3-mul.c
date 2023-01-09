#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function prints mutilplication of 2 numbers
 * @argc: number of arguments in command line
 * @argv: pointer to strings
 * @atoi: converts syting to int value
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int k, multiply;

	multiply = 1;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	for (k = 1; k < argc; k++)
	{
		multiply = multiply * atoi(argv[k]);
	}

	printf("%d\n", multiply);

	return (0);
}
