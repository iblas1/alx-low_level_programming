#include "main.h"

/**
 * get_bit - length of linked list
 * @n: b
 * @index: index
 * Return: amount of elements
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int num_of_Bits = sizeof(unsigned long int) * 8;
unsigned long int mask_dem = 1UL << index;

if (index >= num_of_Bits)
{
return (-1);
}

if (n & mask_dem)
{
return (1);
}
else
{
return (0);
}
}

