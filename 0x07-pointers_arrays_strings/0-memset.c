#include "main.h"

/**
* _memset - fill area of memory with
* @s: pointed by s
* @b: with constant byte
* @n: fill n bytes of the memory
* Return: concatenated string
*/


char *_memset(char *s, char b, unsigned int n)
{
	char *pointer = s;

	while (n > 0)
	{
		*pointer = b;
		pointer++;
		n--;
	}

	return (s);
}

