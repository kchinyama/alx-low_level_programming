#include "main.h"

/**
 * _strcpy - copies string inclusive of null byte
 * @src: pointer to string
 * @dest: pointer to buffer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		*(dest + k) = *(src + k);
	}
	*(dest + k) = '\0';
	return (dest);
}
