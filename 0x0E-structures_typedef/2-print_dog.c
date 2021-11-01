#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: pointer to structure.
 */

void print_dog(struct dog *d)
{
	if (d != '\0')
	{
		if (d->name != '\0')
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->age != '\0')
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}

		if (d->owner != '\0')
		{
			printf("Name: %s\n", d->owner);
		}
		else
		{
			printf("Name: (nil)\n");
		}
	}
}
