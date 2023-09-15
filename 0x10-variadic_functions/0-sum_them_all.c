#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int count = 0;

	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x =	va_arg(args, int);

		count += x;
	}
	va_end(args);
	return (count);
}
