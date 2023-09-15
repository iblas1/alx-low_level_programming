#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - writes the character c to stdout
 * @format: seperates
 */

void print_all(const char * const format, ...)
{

	char *separator, *output, *current_format, *s, c;
	int i;
	double f;

	va_list args;

	va_start(args, format);
	separator = "";
	output = "";
	current_format = (char *)format;
	while (*current_format != '\0')
	{
		if (*current_format == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", output, c);
		} else if (*current_format == 'i')
		{
			i = va_arg(args, int);
			printf("%s%d", output, i);
		} else if (*current_format == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", output, f);
		} else if (*current_format == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			printf("%s(nil)", output);
			else
			printf("%s%s", output, s);
		}
		separator = ", ";
		output = separator;
		current_format++;
	}
	printf("\n");
	va_end(args);
}
