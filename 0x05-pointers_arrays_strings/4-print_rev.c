#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string
 * Return: Void
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k])
	{
		_putchar(s[k]);
		k--;
	}
	_putchar('\n');
}
