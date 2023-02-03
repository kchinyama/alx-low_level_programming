#include "main.h"
/**
 * flip_bits - counts number of bits to flip from 1 number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, counts = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		present = exclusive >> k;
		if (present & 1)
			counts++;
	}
	return (counts);
}
