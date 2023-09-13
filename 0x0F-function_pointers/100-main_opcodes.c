#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Short description
 * @num_bytes: param
 * @start: start
 * Return: Success (0)
 */

void print_opcodes(char *start, int num_bytes)
{
	int i;
	
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", (unsigned char)start[i]);
	}
	printf("\n");
}

/**
* main - entry to main
* @argc: number of arguments
* @argv: array of strings argument
* Return: Success (0)
*/


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	void *main_address = (void *)main;

	print_opcodes((char *)main_address, num_bytes);

	return (0);
}

