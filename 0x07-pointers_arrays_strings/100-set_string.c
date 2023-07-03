#include <stdio.h>
/**
 * set_string - sets the value of a pinter to a char
 * @s: pointer to pointer
 * @to: pointer to string
 * Return: 0 Always
 */
void set_string(char **s, char *to)
{
	*s = to;
}
