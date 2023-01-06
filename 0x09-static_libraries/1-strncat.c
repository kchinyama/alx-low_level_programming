#include "main.h"

/**       
 * _strncat - concantenates(joins) two strings into one string
 * @src: string 1
 * @dest: string 2
 * @n: number of bytes from string 1
 * Return: pointer dest
 */          
      
char *_strncat(char *dest, char *src, int n)
{
        int dest_len, i;
    
        for (dest_len = 0; dest[dest_len] != '\0';)
                dest_len++;
        
        for (i = 0; i < n && src[i] != '\0';)
                i++;
        dest[dest_len + i] = src[i];

        dest[dest_len + i] = '\0';

        return (dest);
}
