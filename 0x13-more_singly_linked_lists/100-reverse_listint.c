#include "lists.h"
/**
 * reverse_listint - reversing a list
 * @head: pointer tohead of list
 *
 * Return: pointer to head of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}

	*head = pre;

	return (*head);
}

