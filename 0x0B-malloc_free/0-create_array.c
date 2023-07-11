#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an array
 * @size: unsigned int
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0 || str == NULL)
		return (NULL);
	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
