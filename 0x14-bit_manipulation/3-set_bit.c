#include "main.h"
/**
 * set_bit - set a bit at index to 1
 * @n: string of 1 and 0s
 * @index: number to set at
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
