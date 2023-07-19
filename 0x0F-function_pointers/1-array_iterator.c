#include <stdio.h>
#include <stdlib.h>
void array_iterator(int *array, size_t size, void (*action)(int));
/**
 * array_iterator - applays a function on each element of array
 * @array: array of int
 * @size: size of array
 * @action: function to be applied
 * Return: nothing always
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
