#include "main.h"
/**
*main - entry point
*print_alphabet_x10 - prints lower case 10 times
*
*Return: Always 0 (Sucess)
*/

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}

