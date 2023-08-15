#include "main.h"
/* more headers goes there */
/**
*main - entry point
*function that print small letter
*
*Return: Always 0 (Sucess)
*/
/* betty style doc for function main goes there */

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
