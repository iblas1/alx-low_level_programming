#include "main.h"
#include <stddef.h>
/**
* _strpbrk - fill area of memory with
* @s: pointed by s
* @accept: with constant byte
* Return: concatenated string
*/


char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i;

	for (p = s; *p != '\0'; p++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*p == accept[i])
			{
				return (p);
			}
		}
	}

	return (NULL);
}

