#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node end
 * @head: pointer tohead
 * @n: node contet
 * Return: pointer to head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	return (node);
}
