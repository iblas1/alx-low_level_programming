#include "main.h"
#include <stdio.h>
/**
 * add - print a sign of a number
 *@a: first number
 *@c: second number
 * Return: Success (0)
 */

int add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
