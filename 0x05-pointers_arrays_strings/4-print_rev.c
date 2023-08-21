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
* print_rev - print strings
* @s: string to print
*/

void print_rev(char *s)
{
	int counter;
	int s_length;

	s_length = _strlen(s) - 1;
	for (counter = s_length; s[counter] != '\0'; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
