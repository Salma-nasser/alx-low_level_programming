#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointerr to head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long i = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%lu] %s\n", (sizeof(h->str) - 3), h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
