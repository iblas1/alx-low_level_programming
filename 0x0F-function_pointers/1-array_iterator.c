#include "function_pointers.h"

/**
 * array_iterator - Short description
 * @array: param
 * @size: function pointer
 * @action: fucntion pointer
 * Description: Longer description
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	action(array[i]);
}
