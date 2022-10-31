#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the given structure
 * @d: dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
