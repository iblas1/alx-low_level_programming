#include "main.h"
/**
*print_alphabet_x10 - prints lower case 10 times
*/

void print_alphabet_x10(void)
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
