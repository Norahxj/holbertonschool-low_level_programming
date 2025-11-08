#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees allocated memory
 * @d: pointer
 *
 * Description: Frees the memory allocated for a dog and
 * its name and owner strings. If d is NULL, the function
 * does nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
