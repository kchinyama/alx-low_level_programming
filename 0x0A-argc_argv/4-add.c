#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - functions adds positive numbers
 * @argc: argument count
 * @argv: pointer to strings
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int sum = 0, k;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			int a;
			char *str;

			str = argv[k];
			for (a = 0; str[a] != '\0'; a++)
			{
				if (str[a] < 48 || str[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
