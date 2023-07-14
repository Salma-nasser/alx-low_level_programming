#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocate a memory
 * @ptr: original pointer
 * @old_size: old size of memory
 * @new_size: new memory size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	old = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = old[i];
	}
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			p[i] = old[i];
	free(ptr);
	return (p);
}
