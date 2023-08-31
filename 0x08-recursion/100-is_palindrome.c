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

/**
* is_palindrome - check if its a pallindrome
* @s: string to check
* Return: concatenated string
*/

int is_palindrome(char *s)
{
	int l = _strlen(s);

	if (l <= 1)
	return (1);

	if (s[0] == s[l - 1])
	return (is_palindrome(s + 1));

	return (0);
}
