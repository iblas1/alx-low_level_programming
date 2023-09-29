#include "main.h"

/**
 * binary_to_uint - length of linked list
 * @b: b
 * Return: amount of elements
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome = 0;

	while (*b != '\0')
	{
		if (*b == '1')
		{
			outcome = (outcome << 1) | 1;
		}
		else if (*b == '0')
		{
			outcome = outcome << 1;
		} else
		{
			return (0);
		}

		b++;
	}

	return (outcome);
}

