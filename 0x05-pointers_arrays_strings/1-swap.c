#include "main.h"

/**
 * swap_int - swaps values of 2 intergers
 * @a: integer 1
 * @b: integer 2
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
