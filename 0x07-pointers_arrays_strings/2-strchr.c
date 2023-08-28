#include "main.h"

/**
* _memset - fill area of memory with
* @s: pointed by s
* @b: with constant byte
* @n: fill n bytes of the memory
* Return: concatenated string
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}

	return (0);
}

