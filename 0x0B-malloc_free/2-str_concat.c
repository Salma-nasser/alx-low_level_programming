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
	int i = 0, r = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	new = malloc(sizeof(char) * (i + r + 1));
	if (new == NULL)
		return (NULL);
	i = r = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		new [i] = s2[r];
		i++;
		r++;
	}
	new[i] = '\0';
	return (new);
}

