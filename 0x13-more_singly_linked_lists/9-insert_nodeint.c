#include "lists.h"
/**
 * insert_nodeint_at_index - function allows us to insert node
 * @head: pointer to the linked list
 * @idx: index of linked list were insertion will be made
 * @n: data to insert at new node
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (k = 0; temp && k < idx; k++)
	{
	if (k == idx - 1)
	{
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
	}
	else
		temp = temp->next;
	}
	return (NULL);
}

