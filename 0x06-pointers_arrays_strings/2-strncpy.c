#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string 2
 * @src: string 1
 * @n: number of bytes from strin 1
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && *(src + k) != '\0')
	{
		*(dest + k) = *(src + k);
		k++;
	}
	while (k != n)
		dest[k++] = '\0';
	return (dest);
}
