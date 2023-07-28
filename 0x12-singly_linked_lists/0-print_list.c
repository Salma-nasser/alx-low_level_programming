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
			printf("[%d] %s\n",_strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
/**
 *_strlen - return the length of a string
 *@s: input
 *Return: int length of string
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
