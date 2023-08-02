#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node at nth index
 * @head: pointer to head
 * @index: num to find node at
 * Return: pointer to node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp ? tmp : NULL);
}
