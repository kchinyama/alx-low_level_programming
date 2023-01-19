#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array element
 * @array: pointer to the array
 * @size: the number of elements in array
 * @action: pointer to print in reg or hex
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
