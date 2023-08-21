#include "main.h"
#include <stdio.h>

/**
* print_array - print every other chracter
* @a: array
* @n: array length
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}
