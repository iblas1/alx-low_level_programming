#include "main.h"

/**
 * print_binary - length of linked list
 * @n: b
 * Return: amount of elements
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_printed = 0;
	int j, num_of_bits = sizeof(n) * 8;

	if (n == 0)
	{
	_putchar('0');
	return;
	}

	for (j = num_of_bits - 1; j >= 0; j--)
	{
	bit_printed = (n >> j) & 1;
	if (bit_printed == 1)
	{
	_putchar('1');
	}
	else if (bit_printed == 0 && j < num_of_bits - 1)
	{
	_putchar('0');
	}
	}
}
