#include "main.h"
/**
 * flip_bits - get number of bits to flip to get to a specific number
 * @n: string of 1s and 0s
 * @m: string of 1s and 0s
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countb = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countb++;
	}
	return (countb);
}
