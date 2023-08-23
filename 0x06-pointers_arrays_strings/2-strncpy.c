#include "main.h"

/**
* _strncpy - concatenate two strings together
* @dest: destination
* @src: source
* @n: number
* Return: concatenated string
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
	*dest = '\0';
	dest++;
	n--;
	}

	return (original_dest);
}
