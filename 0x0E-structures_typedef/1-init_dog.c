#include "dog.h"
#include <string.h>
/**
 * init_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: param
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
