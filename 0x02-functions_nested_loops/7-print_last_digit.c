#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print a sign of a number
 * @num: the number to print its sign
 *
 * Return: Success (0)
 */

int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = (num % 10);
	_putchar(lastDigit + '0');
	_putchar('\n');
	return (lastDigit);
}
