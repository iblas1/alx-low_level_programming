#include "main.h"

/**
 * set_bit - length of linked list
 * @n: b
 * @index: index
 * Return: amount of elements
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_of_Bits = sizeof(unsigned long int) * 8;
	unsigned long int mask_me = 1UL << index;

	if (index >= num_of_Bits)
	{
		return (-1);
	}

	*n |= mask_me;

	return (1);
}
