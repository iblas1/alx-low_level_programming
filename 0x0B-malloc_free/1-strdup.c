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
* _strdup - to copy a string to an allocated memory
* @str: string to copy
* Return: pointer to the array created
*/

char *_strdup(char *str)
{
	int i = 0;
	size_t string_len;
	char *string_copy = (char *)malloc((sizeof(char) * string_len) + 1);

	if (string_copy == NULL)
	return (NULL);

	if (str == NULL)
	return (NULL);

	string_len = _strlen(str);

	while (*str != '\0')
	{
		string_copy[i] = *str;
		i++;
		str++;
	}
	string_copy[string_len] = '\0';
	return (string_copy);
}

