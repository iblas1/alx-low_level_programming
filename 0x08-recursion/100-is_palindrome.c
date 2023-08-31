#include "main.h"

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

	if (s[0] != s[l - 1])
	return (0);

	return (is_palindrome(s + 1));
}
