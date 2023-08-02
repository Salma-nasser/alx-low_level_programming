#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint - insert a node at an index
 * @head: pointer to pointer to head
 * @idx: index to insert at
 * @n: number to node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (tmp && len < (idx - 1))
	{
		tmp = tmp->next;
		len++;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
