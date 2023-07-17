#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: string
 * @age:float
 * @owner:string
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = 0, len2 = 0, i, j;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	for (i = 0; i < len1; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	for (j = 0; j < len2; j++)
	{
		dog->owner[j] = owner[j];
	}
	dog->owner[i] = '\0';
	return (dog);
}
