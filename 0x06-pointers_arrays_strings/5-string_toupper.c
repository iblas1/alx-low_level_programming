#include "main.h"

/**
* string_toupper - concatenate two strings together
* @str: string to capitalise
* Return: concatenated string
*/

char *string_toupper(char *str)
{
	char *uppercaseStr = str;

	while (*str != '\0')
	{
	if (*str >= 'a' && *str <= 'z')
	{
	*str = *str - 32;
	}
	str++;
	}
	return (uppercaseStr);
}
