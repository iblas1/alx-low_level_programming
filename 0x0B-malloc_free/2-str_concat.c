#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - return the length of a string
* @s: string
* Return: Sucess (0)
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
* str_concat - to concatenate a string to an allocated memory
* @s1: destination string
* @s2: source string
* Return: pointer to the array created
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	size_t length;
	size_t length_2;
	char *destination;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	length = _strlen(s1);
	length_2 = _strlen(s2);

	destination = malloc((length + length_2 + 1) * sizeof(char));

	if (destination == NULL)
	return (NULL);

	while (*s1 != '\0')
	{
		destination[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		destination[i] = *s2;
		s2++;
		i++;
	}

	destination[length + length_2] = '\0';

	return (destination);
}
