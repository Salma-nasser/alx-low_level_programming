#include <stdio.h>
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
