#include <stdio.h>
/**
 * _pow_recursion - return x to power of y
 * @x: integer
 * @y: integer
 * Return: x^y or 1 or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
