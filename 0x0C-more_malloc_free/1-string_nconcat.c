#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2:second string
 * @n: number of bytes
 * Retrun: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *new;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n < len2)
		new = malloc(sizeof(char) * (len1 + n + 1));
	else
		new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);
	while (i < len1)
	{
		new[i] = s1[i];
		i++;
	}
	while (n < len2 && i < len1 + n)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len2 && i < len1 + len2)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);

}
