#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function searches for an integer in an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: -1 in no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
