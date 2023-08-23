#include "main.h"

/**
* reverse_array - concatenate two strings together
* @a: destination
* @n: source
*/

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
	int temp = a[start];

	a[start] = a[end];
	a[end] = temp;

	start++;
	end--;
	}
}
