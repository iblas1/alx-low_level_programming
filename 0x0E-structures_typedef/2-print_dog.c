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

	printf("Name: %s\n", d->name ? d->name : "(nil)");

	(!d->age) ?
	printf("Age: (nil)\n") :
	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
