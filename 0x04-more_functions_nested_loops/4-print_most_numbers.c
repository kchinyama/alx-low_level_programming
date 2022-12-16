#include "main.h"

/**
 * function that prints numbers 0 to 9, excludes 2 and 4 then new line
 *
 * Return result
 */

void print_most_numbers(void)
{
	int number;
	for (number = 48; number < 58; number++)
	{
	if ((number == 50) || (number == 52))
	{
		continue;
	}
	_putchar(number);
	}
	_putchar(10);
}
