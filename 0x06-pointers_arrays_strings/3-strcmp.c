#include "main.h"

/**
* _strcmp - concatenate two strings together
* @s1: source
* @s2: number
* Return: concatenated string
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
	if (*s1 == '\0')
	{
	return (0);
	}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
