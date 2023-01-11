#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *create_array - function create array of chars
 * @size: points to size of array
 * @c: points to char
 * Return: 0 if NULL 
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);

	while (size--)
		array[size] = c;
	return (array);
}
