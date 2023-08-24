#include "main.h"
#include <stdio.h>

/**
* main - concatenate two strings together
* Return: concatenated string
*/

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

*((int *)((char *)p + 20)) = 98;

printf("a[2] = %d\n", a[2]);
return (0);
}
