#include "main.h"

/**
 * _pow_recursion - function calls x raised to the power of y
 * @x: int value
 * @y: int value
 * Return: Int number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
