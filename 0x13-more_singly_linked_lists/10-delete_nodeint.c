#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node
 * @head: pointer to pointer to head
 * @index: index to be deleted
 * Return: 1 if successful -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < (index - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);
	return (1);
}
