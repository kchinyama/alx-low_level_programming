#include "main.h"
  
/**
 * rev_string - function that reverses a string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
        int k = 0;

        while (s[k])
        {
		_putchar(s[k]);
		k--;
        }
}
