#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - Short description
 * @d: param
 * Description: Longer description
 */

void free_dog(dog_t *d)
{
	if (!d)
	return;

	free(d->name);
	free(d->owner);

	free(d);
}
