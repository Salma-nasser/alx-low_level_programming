#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
