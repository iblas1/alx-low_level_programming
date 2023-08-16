#include "main.h"
#include <ctype.h>
/**
*print_alphabet - print 1 for lower case alphabets
*/


int _islower(int c)
{
	int result;

	result = isupper(c);
	if (result)
	{
	_putchar(1 + '0');
	} else 
	_putchar(0 + '0');
	_putchar('\n');

	return (0);
}
