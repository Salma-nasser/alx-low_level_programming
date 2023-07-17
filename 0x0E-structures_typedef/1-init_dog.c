#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type dog
 * @d: struct dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner name
 * Return: by reference
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
