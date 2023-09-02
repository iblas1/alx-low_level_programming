#include "main.h"
#include <stdio.h>
/**
 * _abs - print a sign of a number
 * @c: the number to print its sign
 *
 * Return: Success (0)
 */

int _abs(int c)
{
	if (c < 0)
	return (c * -1);
	else
	return (c);
}

/*
*int main()
*{
*	int c = _abs(0);
*	printf("%i\n", c);
*	return (0);
*}
*/
