#include <stdio.h>
#include "main.h"
/**
 * main - our entry point
 * @argc: points to number of arguments
 * @argv: points to number strings in arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
