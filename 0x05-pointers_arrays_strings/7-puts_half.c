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
* puts_half - print every other chracter
* @str: string
*/

void puts_half(char *str)
{
	int counter, length, even_average, odd_average;

	length = _strlen(str);
	even_average = length / 2;
	odd_average = (length - 1) / 2;

	if (length % 2 == 0)
	counter = even_average;
	else
	counter = odd_average;

	while (counter < length && str[counter] == ' ')
	counter++;

	while (counter < length)
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
