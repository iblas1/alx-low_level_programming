#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - return the length of a string
* @b: string
* Return: Sucess (0)
*/

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);
	
	if (memory == NULL)
	exit (98);

	return memory;
}
