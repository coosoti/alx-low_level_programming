#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: variable pointing to struct dog_t, to free
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
