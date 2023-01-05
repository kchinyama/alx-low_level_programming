#include "main.h"
/**
 * factorial - prints factorial of given number
 * @n: given integer
 * Return: Int number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);/*indicates error*/
	}
	return (n * factorial(n - 1));
}
