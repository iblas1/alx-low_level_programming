#include "main.h"
#include <stdio.h>
/**
 *times_table - print a sign of a number
 * Return: Success (0)
 */
void get_integer(int i)
{
	if (i / 10)
	{
		get_integer(i / 10);
	}
	_putchar(i % 10 + '0');
}

void times_table(void)
{
int row, col, k;

for (row = 0; row <= 9; row++)
{
	for (col = 0; col <= 9; col++)
	{
	k = row * col;
	if (k < 10 && col != 0)
	_putchar(' ');
	get_integer(k);
	if (col != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	putchar('\n');
}
}

int main(void)
{
    times_table();
    return (0);
}