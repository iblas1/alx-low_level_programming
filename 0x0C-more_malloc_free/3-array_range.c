#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range to concatenate a string to an allocated memory
* @min: destination string
* @max: source string
* Return: pointer to the array created
*/

int *array_range(int min, int max)
{
	int *array, i, j = 0, element_size = 0;

	if (min > max)
	return NULL;

	element_size = (max - min) + 1;
	
	array = malloc(sizeof(int) * element_size);
	if (array == NULL)
	return NULL;
	
	i = 0;
	for (j = min; j <= max; j++, i++)
	array[i] = j;
	
	return (array);	
}
