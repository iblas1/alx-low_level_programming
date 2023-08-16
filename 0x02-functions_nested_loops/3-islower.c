#include "main.h"
#include <ctype.h>
/**
 * _islower - reveal a lowercase letter
 * @c: letter to check
 *
 * Return: Success (0)
 */


int _islower(int c)
{
	int result;

	result = isupper(c);
	if (result)
	{
	_putchar(0 + '0');
	}
	else
	_putchar(1 + '0');

	_putchar('\n');

	return (0);
}
