#include "main.h"

/**
 * get_endianness - length of linked list
 * Return: amount of elements
 */

int get_endianness(void)
{
	int number = 1;
	char *bytePointer = (char *)&number;

	if (*bytePointer == 1)
		return (1);

	else
	return (0);
}

