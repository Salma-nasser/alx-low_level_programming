#include <stdio.h>
#include <stdlib.h>
int int_index(int *array, int size, int (*cmp)(int));
/**
 * int_index - searches for an element
 * @array: array of ints
 * @size: size of array
 * @cmp: compare function
 * Return: index of element if found -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		x = cmp(array[i]);
		if (x != 0)
			return (i);
	}
	return (-1);
}
