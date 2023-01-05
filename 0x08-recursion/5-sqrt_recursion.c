#include "main.h"
/**
 * _sqrt_recursion - function calls square root of a number
 * @n: integer number
 * Return: Int value
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}
/**
 * squareroot - function calls square root of a number
 * @n: number to which we want square root
 * @val: square root value
 * Return: Int value
 */
int squareroot(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (squareroot(n, val + 1));
	else
		return (-1);
}
