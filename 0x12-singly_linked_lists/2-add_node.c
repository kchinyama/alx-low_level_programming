#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - function adds node at beggining of linked list
 * @head: pointer to start of linked list
 * @str: new string to add to the linked list
 * Return: address of new node or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
			if (!newNode)
			return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
