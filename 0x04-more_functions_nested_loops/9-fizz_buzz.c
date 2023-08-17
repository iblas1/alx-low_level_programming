#include "main.h"
#include <stdio.h>

/**
* main - print fizzbuzz
* multiple of 3 fizzbuzz
* Return: 0 on Success
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
		else if (i % 5 == 0)
		printf("Buzz");
		else if (i % 3 == 0)
		printf("Fizz");
		else
		printf("%d", i);

		if (i != 100)
		printf(" ");

	}
	printf("\n");
	return (0);
}
