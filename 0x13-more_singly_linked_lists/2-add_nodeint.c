#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add node
 * @head: pointer to pointer to head
 * @n: node contents
 * Return: pointer to head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = (*head);
	(*head) = node;
	return (*head);
}
