#include "main.h"
#include <stdio.h>

/**
* main - entry to main
* @argc: number of arguments
* @argv: array of strings argument
* Return: Success (0)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
	{
		printf("%i\n", argc - 1);
	}

	return (0);
}
