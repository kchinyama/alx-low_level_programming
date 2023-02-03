#include "main.h"
/**
 * print_binary - function prints the binary equivalent of a decimal number
 * @n: number converted to binary
 * Return: success
 */
void print_binary(unsigned long int n)
{
	int k, counts = 0;
	unsigned long int present;

	for (k = 63; k >= 0; k--)
	{
		present = n >> k;

		if (present & 1)
		{
			_putchar ('1');
			counts++;
		}
		else if (counts)
			_putchar ('0');
	}
	if (!counts)
		_putchar ('0');
}
