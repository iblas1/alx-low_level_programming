#include "main.h"
#include <stdlib.h>


/**
* _calloc - to concatenate a string to an allocated memory
* @nmemb: destination string
* @size: source string
* Return: pointer to the array created
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem = malloc(nmemb * size);
	unsigned int i;
	unsigned char *p;

	if (!nmemb || !size)
	return (NULL);

	if (!mem)
	return (NULL);

	p = (unsigned char *)mem;
	for (i = 0; i < (nmemb * size); i++)
	p[i] = 0;

	return (mem);
}
