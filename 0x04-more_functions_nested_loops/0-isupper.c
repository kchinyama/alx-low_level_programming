# include "main.h"

/**
 * isupper - checks for upper case
 *
 * @c: print int
 * Return: print either 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
