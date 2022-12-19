#include "main.h"

/**
 * _puts - prints a string and then new line
 * @str: the string
 * Returns: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar ('\n');
}
