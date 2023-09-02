#include "main.h"

/**
* _strchr - fill area of memory with
* @s: pointed by s
* @c: with constant byte
* Return: concatenated string
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}

