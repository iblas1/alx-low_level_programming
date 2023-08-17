#include "main.h"

/**
* print_diagonal - print straight lines
*@n: number of lines
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
				_putchar('\\');
				}
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
