#include "main.h"
#include <stdlib.h>

/**
* create_array - allocate memory to create array
* @size: size of the array
* @c: character to fill the array
* Return: pointer to the array created
*/


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	return (NULL);

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
