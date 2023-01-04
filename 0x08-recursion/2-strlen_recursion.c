#include "main.h"

/**
 * _strlen_recursion - function prints the lenght of a string
 * @s: points to the string
 * Return: Void
 */

int _strlen_recursion(char *s)
{
	int k = 0;

	if (*s > '\0')
	{
		k = _strlen_recursion(s + 1);
	}
	return (k);
}
