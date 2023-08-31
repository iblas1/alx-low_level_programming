#include "main.h"

/**
* is_divisible - return the length of a string
* @n: string 1
* @divisor: string 2
* Return: Sucess (0)
*/


int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor + 1));
}

/**
* is_prime_number - return the length of a string
* @n: string 1
* Return: Sucess (0)
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!is_divisible(n, 2));
}

