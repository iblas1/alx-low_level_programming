#include "main.h"
#include <ctype.h>
/**
 * _islower - reveal a lowercase letter
 * @c: letter to check
 *
 * Return: Success (0)
 */


int _islower(int c)
{
	int result;

	result = islower(c);
	if (result)
	{
	return (1);
	}
	else
	return (0);

}


/*
another way to write it
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else return (0);
	

}
*/