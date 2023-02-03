#include "main.h"
/**
 * binary_to_uint - function returns unsigned int from binary number
 * @b: binary number we are converting to unsigned int
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int k = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		num = 2 * num + b[k] - ('0');
	}
	return (num);
}
