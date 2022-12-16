#include "main.h"

/**
 * function that prints number from 0 -9
 *
 * Return: result
 */

void print_numbers(void);
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}
	_putchar ('\n');
}
		
