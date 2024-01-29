#include <stdio.h>
/**
 * _strpbrk - finds the first occurence and returns it
 * @s: pointer to char
 * @accept: array to search for
 * Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
			if (*s == accept[k])
				return (s);
		s++;
	}
	return ('\0');
}
