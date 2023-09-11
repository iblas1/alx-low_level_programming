#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 * Return: new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(struct dog));

	if (!n_dog)
	return (NULL);

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
