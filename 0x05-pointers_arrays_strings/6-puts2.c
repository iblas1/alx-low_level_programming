#include "main.h"

/**
* puts2 - print every other chracter
* @str: string
*/

void puts2(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');

}
