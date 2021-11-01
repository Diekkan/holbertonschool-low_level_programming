#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: return a structure with the copied data.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nameStr, ownerStr, j;
	dog_t *newdog;

	newdog = (dog_t *) malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	nameStr = ownerStr = 0;
	while (name[nameStr])
		nameStr++;
	while (owner[ownerStr])
		ownerStr++;

	newdog->name = malloc(sizeof(newdog->name) * nameStr);
		if (newdog->name == NULL)
		{
			free(newdog);
			return (NULL);
		}
	for (j = 0; j <= nameStr; j++)
		newdog->name[j] = name[j];

	newdog->owner = malloc(sizeof(newdog->owner) * ownerStr);
		if (newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog);
			return (NULL);
		}
	for (j = 0; j <= ownerStr; j++)
		newdog->owner[j] = owner[j];

	newdog->age = age;

	return (newdog);
}
