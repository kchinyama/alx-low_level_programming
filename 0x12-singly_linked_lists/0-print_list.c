#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

**/

 /** print_list - function prints list of elements in linked list
 * @list_t: elements in list
 * @h: pointer to next node in linked list
 * Return: NULL if sring is 0
 */

size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
	if (!h->str)	
        printf("[0] (nil)\n");
       	else
	printf("[%u]%s\n", h->len, h->str);
	h = h->next;
		k++;
	}
	return (k);
}
