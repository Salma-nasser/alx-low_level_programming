#include <stdio.h>
/**
 * _strchr - find the first occurence of a character
 * @s: string
 * @c: char
 * Return: 0 or pointer to char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
