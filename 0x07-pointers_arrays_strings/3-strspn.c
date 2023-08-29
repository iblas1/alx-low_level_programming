#include "main.h"

/**
* _strspn - fill area of memory with
* @s: pointed by s
* @accept: with constant byte
* Return: concatenated string
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int first_counter, second_counter;

	for (first_counter = 0; s[first_counter] != '\0'; first_counter++)
		{
		for (second_counter = 0; accept[second_counter] != '\0'; second_counter++)
		{
			if (s[first_counter] == accept[second_counter])
			{
				break;
			}
		}

		if (accept[second_counter] == '\0')
		{
			return (first_counter);
		}
	}

	return (first_counter);
}

