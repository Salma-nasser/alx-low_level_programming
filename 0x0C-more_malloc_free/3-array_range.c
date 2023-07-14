#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocates an array of a specific range
 * @min: start
 * @max: end
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i < max + 1; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
