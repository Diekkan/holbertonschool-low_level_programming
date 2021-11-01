#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  a function that frees dogs.
 *@d: a pointer to the structure to be freed.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
