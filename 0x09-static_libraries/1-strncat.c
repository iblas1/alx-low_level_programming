#include "main.h"

/**
* _strncat - concatenate two strings together
* @dest: destination
* @src: source
* @n: number
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return (original_dest);
}
