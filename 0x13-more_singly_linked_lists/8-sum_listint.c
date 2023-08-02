#include "lists.h"
/** 
 * sum_listint - sum the list
 *@head: pointer to head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
