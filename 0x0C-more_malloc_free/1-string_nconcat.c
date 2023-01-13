#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function appends one string onto another
 * @s1: string number 1
 * @s2: string number 2
 * @n: number of bytes allocated
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *kay;
	unsigned int as1, as2, akay, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (as1 = 0; s1[as1] != '\0'; as1++)
		;

	for (as2 = 0; s2[as2] != '\0'; as2++)
		;

	if (n > as2)
		n = as2;
	akay = as1 + n;

	kay = malloc(akay + 1);

	if (kay == NULL)
		return (NULL);

	for (b = 0; b < akay; b++)
		if (b < as1)
			kay[b] = s1[b];
		else
			kay[b] = s2[b - as1];

	kay[b] = '\0';

	return (kay);
}
