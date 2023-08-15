#include "main.h"
/**
*main - entry point
*function that print small letter
*
*print_alphabet_x10 - prints lower case 10 times
*/

void print_alphabet_x10(void)
/**
*main - entry point
*
*print_alphabet - prints lower case alphabets
*/
{
	char a, b;

	for (a = 1; a < 11; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
	}

}
