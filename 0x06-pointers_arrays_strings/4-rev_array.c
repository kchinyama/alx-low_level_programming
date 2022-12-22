#include "main.h"

/**
 * reverse_array - reverses contents of array of ints
 * @a: the array
 * @n: the number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k = 0, arr;

	for (arr = n / 2; arr > 0; arr--, k++)
	{
		a[n - k - 1] += a[k];
		a[k] = a[n - k - 1] - a[k];
		a[n - k - 1] = a[n - k - 1] - a[k];
	}
}
