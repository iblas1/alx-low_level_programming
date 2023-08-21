#include "main.h"
#include <stdio.h>

/**
* _strcpy - print every other chracter
* @dest: array
* @src: array length
* Return: siuccess (0)
*/

char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

	while (*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	}

	*dest = '\0';
	return (originalDest);
}
