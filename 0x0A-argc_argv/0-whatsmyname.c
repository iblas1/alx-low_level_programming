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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
