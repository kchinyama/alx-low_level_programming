#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output
 * @c: The character we want to print
 *
 * Return: On success 1
 * On error, -1 is returned, and error is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
