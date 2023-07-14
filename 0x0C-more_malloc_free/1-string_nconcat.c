#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return:string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *news;
	long unsigned int i, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	news = malloc(sizeof(s1) + n);
	if (news == NULL)
		return (NULL);
	for (i = 0; i < sizeof(s1); i++)
		news[i] = s1[i];
	for (k = sizeof(s1); k < (sizeof(s1) + n); k++)
	{
		news[k] = s2[j];
		j++;
	}
	return (news);
}
