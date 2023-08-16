#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print a sign of a number
 *@n: initial number
 * Return: Success (0)
 */

void print_to_98(int n)
{
if (n <= 98)
{
	for (n = n; n <= 98; n++)
	{
		if (n != 98)
		printf("%i, ", n);
		else
		printf("%i\n", n);
	}
}
else
{

	for (n = n; n >= 98; n--)
	{
		if (n != 98)
		printf("%i, ", n);
		else
		printf("%i\n", n);
	}
}
}


