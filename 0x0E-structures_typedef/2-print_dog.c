#include "dog.h"
#include <string.h>
#include <stdio.h>
/**
 * print_dog - Short description
 * @d: param
 * Description: Longer description
 */


void print_dog(struct dog *d)
{
	if (!d)
	return;

	(!d->name) ?
	printf("Name: (nil)\n") :
	printf("Name: %s\n", d->name);

	(!d->age) ?
	printf("Age: (nil)\n") :
	printf("Age: %f\n", d->age);

	(!d->owner) ?
	printf("Name: (nil)\n") :
	printf("Owner: %s\n", d->owner);
}
