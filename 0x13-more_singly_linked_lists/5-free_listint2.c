#include "lists.h"
/**
 * free_listint2 - frees memory allocated to linked list
 * @head: pointer to the linked list
 * Return: 0 success
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	*head = NULL;
}
