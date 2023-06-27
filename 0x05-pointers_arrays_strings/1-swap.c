#include <stdio.h>
/**
 *swap_int - entry point swaps two integers
 *@a:first integer
 *@b:second integer
 *Return: a and b by reference
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
