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
* string_nconcat - to concatenate a string to an allocated memory
* @s1: destination string
* @s2: source string
* @n: number of size
* Return: pointer to the array created
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int length, length2;
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
	length2 = _strlen(s2);

	if (n >= length2)
	n = length2;

	destination = malloc((length + n + 1) * sizeof(char));
	if (destination == NULL)
	return (NULL);

	while (*s1 != '\0')
	{
		destination[i++] = *s1;
		s1++;
	}
	while (j < n)
	{
		destination[i++] = *s2;
		s2++;
		j++;
	}

	destination[i] = '\0';
	return (destination);
}
