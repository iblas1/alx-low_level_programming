#include "main.h"

/**
* _memcpy - fill area of memory with
* @dest: pointed by s
* @src: with constant byte
* @n: fill n bytes of the memory
* Return: concatenated string
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destination_pointer = dest;
	char *source_pointer = src;
	unsigned int i;

	for (i = 0; i < n; i++) {
		*destination_pointer = *source_pointer;
		destination_pointer++;
		source_pointer++;
	}

	return dest;
}

