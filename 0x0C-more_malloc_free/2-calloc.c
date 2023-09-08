#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _calloc - to concatenate a string to an allocated memory
* @nmemb: destination string
* @size: source string
* Return: pointer to the array created
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem = malloc(nmemb * size);

	if (!nmemb || !size)
	return (NULL);

	if (!mem)
	return (NULL);

	return (mem);
}
