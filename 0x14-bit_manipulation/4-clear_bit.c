#include "main.h"
/**
 * clear_bit - clear a bit at index to 0
 * @n: string of 1s and 0s
 * @index: number to change bit at
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
