#include "main.h"

/**
 * puts_half - prints half of a string and then new line
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int k = 0;

	while (str[i] != '\0')
		i += 1;
	k = i / 2;
	if (i % 2 == 1)
		k += 1;
	while (str[k] != '\0')
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
