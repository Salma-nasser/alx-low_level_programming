#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free a dog struct
 * @d: pointer to dog
 * Return: 0 always
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
