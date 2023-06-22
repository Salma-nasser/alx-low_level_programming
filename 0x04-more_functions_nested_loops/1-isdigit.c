#include "main.h"

/**
 * _isdigit - entry point
 *
 * check if the entry is a digit or not
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
