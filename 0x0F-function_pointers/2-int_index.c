#include "function_pointers.h"

/**
 * int_index - Short description
 * @array: param
 * @size: function pointer
 * @cmp: fucntion pointer
 * Return: Success (0)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}
