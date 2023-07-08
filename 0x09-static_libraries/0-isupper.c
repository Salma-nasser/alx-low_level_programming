#include "main.h"

/**
 *_isupper - entry point
 *@c: char to check
 *check if the input is an upper case or not
 *
 * Return: 1 if uppercase 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
