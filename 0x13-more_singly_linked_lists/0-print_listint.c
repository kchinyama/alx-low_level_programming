#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function prints all elements of a linked list
 * @h: pointer to elements in the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
