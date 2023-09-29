#include "main.h"

/**
 * clear_bit - length of linked list
 * @n: b
 * @index: index
 * Return: amount of elements
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m) {
	unsigned long int xor_outcome = n ^ m;
	unsigned int result = 0;

	while (xor_outcome > 0)
	{
		if (xor_outcome & 1)
		{
			result++;
		}
		xor_outcome >>= 1;
	}

	return (result);
}

