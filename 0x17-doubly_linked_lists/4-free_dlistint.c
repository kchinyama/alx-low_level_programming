#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a linked list
 *
 * Return: 0 on success
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ax;

	while (head != NULL)
	{
		ax = head;
		head = head->next;
		free(ax);
	}
}
