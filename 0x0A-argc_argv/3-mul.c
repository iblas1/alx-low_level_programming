#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry to main
* @argc: number of arguments
* @argv: array of strings argument
* Return: Success (0)
*/

int main(int argc, char *argv[])
{
	int result;
	(void)argc;
	
	if (argc > 2)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
