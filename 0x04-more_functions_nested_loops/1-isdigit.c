#include "main.h"

/**
 * Main - we want to check whether a character is a digit or not
 *
 * @c: is a digit
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);

	else
		return (0);
}
