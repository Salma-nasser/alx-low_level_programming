#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string or null
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int k, j, l, i = 0, r = 0;

	while (*s1 != '\0')
		i++;
	while (*s2 != '\0')
		r++;
	new = malloc(sizeof(char) * (i + r + 1));
	if (new == NULL)
		return (NULL);
	for (k = 0; s1[k]; k++)
		new[k] = s1[k];
	j = i + 1;
	for (l = 0; s2[l]; l++)
	{
		new[j] = s2[l];
		j++;
	}
	return (new);
}

