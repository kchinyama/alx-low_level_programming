#include <stdio.h>
#include "main.h"
/**
 * main - function is our entry point
 * @argc: int value showing number of commands in command line
 * @argv: pointer to string
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int k;

	printf("argc = %d\n", argc);
	printf("My name is:\n");
/*	printf("My name is:\n");*/

	for (k = 1; k < argc; k++)
	{
		printf("argv[%d] = %s\n", k, argv[k]);
	}
	return (0);
}
