#include "main.h"

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
