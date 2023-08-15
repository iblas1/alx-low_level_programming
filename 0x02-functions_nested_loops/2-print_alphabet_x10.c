#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/* more headers goes there */
/**
*main - entry point
*function that print small letter
*
*Return: Always 0 (Sucess)
*/
/* betty style doc for function main goes there */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

int main(void)
{
	print_alphabet_x10();
	return (0);
}
