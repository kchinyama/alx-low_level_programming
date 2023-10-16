#include "main.h"
  
/**
 * _memset- function fills memory of n bytes with b
 * @n: memory bytes
 * @s: pointer
 * @b: filled bytes
 * Return: pointer to memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{

        int i = 0;

        for (; n > 0; i++)
        {
                s[i] = b;
                n--;
        }
        return (s);
}

