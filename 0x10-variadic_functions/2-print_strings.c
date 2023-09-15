#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>

/**
 * print_strings - writes the character c to stdout
 * @n: The character to print
 * @separator: seperates
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);


		x ? printf("%s", x) : printf("(nil)");

		if (separator != NULL && i != (n - 1))
		printf("%s", separator);

	}
	va_end(args);

	printf("\n");
}
