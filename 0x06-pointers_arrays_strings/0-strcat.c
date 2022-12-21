#include "main.h"

/**
 * _strcat - concantenates(joins) two strings into one string
 * @src: string 1
 * @dest: string 2 - overwriting the terminated \0
 * Return: pointer dest
 */

char *_strcat(char *dest, char *src)
{
	int k = -1, i;

	for (i = 0; dest[i] != '\0';)
		i++;

	do {
		k++;
		dest[i] = src[k];
		i++;

	} while (src[k] != '\0');
	return (dest);
}
