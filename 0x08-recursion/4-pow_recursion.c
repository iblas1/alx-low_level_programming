#include "main.h"

/**
* _pow_recursion - calculate x raise to poweer of x
* @x: x number
* @y: y number
* Return: calculated power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y < 1)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}

