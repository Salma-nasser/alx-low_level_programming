#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node
 * @head: pointer to a pointer to list
 * @str: content of new node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned long len = 0;

	new = malloc(sizeof(list_t));
	while (str[len])
		len++;
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
