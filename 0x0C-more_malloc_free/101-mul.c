#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
* main - to concatenate a string to an allocated memory
* @ac: destination string
* @argv: source string
* Return: pointer to the array created
*/

int main(int ac, char *argv[])
{
	int result, i, j;
	char *error = "Error";
	(void)ac;

	if (ac != 3)
	{
	while (*error != '\0')
	{
	_putchar(*error);
	error++;
	}
	_putchar('\n');
	exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (!isdigit(argv[i][j]))
			{
		while (*error != '\0')
		{
		_putchar(*error);
		error++;
		}
		_putchar('\n');
		exit(98);
		}
		}
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
