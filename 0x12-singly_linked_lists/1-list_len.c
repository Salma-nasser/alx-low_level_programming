#include "lists.h"
/**
 * list_len - prints length of list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned long i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
