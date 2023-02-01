#include "lists.h"
/**
 * free_listint - function frees linked list memory allocation
 * @head: pointer to linked list that we are freeing
 * Return: 0 success
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
