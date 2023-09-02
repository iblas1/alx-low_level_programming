#include "main.h"

/**
* _strcat - concatenate two strings together
* @dest: destination
* @src: source
* Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (original_dest);
}
