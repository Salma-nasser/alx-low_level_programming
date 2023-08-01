#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints a linked list
 * @h: head of the linked list
 * Return: num of items in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
