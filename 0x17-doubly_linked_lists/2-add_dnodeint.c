#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds node at end of a list
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *elem;

	if (head == NULL)
	{
		return (NULL);
	}

	elem = malloc(sizeof(dlistint_t));

	if (elem == NULL)
	{
		return (NULL);
	}

	elem->n = n;
	elem->prev = NULL;
	elem->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = elem;
	}
	*head = elem;

	return (elem);
}
