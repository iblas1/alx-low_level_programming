#include "main.h"

/**
* _puts - print strings
* @str: string to print
*/

void _puts(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
