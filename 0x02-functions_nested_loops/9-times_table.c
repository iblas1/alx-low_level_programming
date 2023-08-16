#include "main.h"
#include <stdio.h>
/**
 *times_table - print a sign of a number
 * Return: Success (0)
 */

void times_table(void)
{
int row, col;

for (row = 0; row <= 9; row++)
{
	for (col = 0; col <= 9; col++)
	{
	if (col > 0)
	{
	printf(",");
	}
	printf("%2d, ", row * col);
	}
	putchar('\n');
}
}
