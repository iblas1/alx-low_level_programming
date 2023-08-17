#include "main.h"

/**
* print_triangle - print straight lines
*@size: size of square
*/

void print_triangle(int size)
{
int i, j, s;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
	for (s = size - i; s > 0; s--)
	_putchar(' ');
	for (j = 1; j <= i; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
}
else
_putchar('\n');
}
