#include <stdio.h>
#include "main.h"
/**
 * main - function prints all arguments received
 * @argc: number of arguments
 * @argv: pointer to strings
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
