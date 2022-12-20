#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: pointer to first integer
 * @n: number of elements in array
 * Return: void
 */

void print_array(int *a, int n)
{
	int k = 0;
	
	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(", ");
	}
	printf("\n");
}
