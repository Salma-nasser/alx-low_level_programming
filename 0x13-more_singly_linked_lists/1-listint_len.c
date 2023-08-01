#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns size of a list
 * @h: head of list
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
