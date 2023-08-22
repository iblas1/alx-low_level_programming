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
* puts2 - print every other chracter
* @str: string
*/

void puts2(char *str)
{
	int counter;

	counter = 0;
	while (counter <= _strlen(str))
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');

}
