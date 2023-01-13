#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function allocates memory
 * @b: pointer to allocated memory
 * Return: 0 success
 */
void *malloc_checked(unsigned int b)
{
	char *kay;

	kay = malloc(b);
	if (kay == NULL)
		exit(98);
	return (kay);
}
