#include <stdio.h>
/**
* main - entry point
* display a particular message to stand error
*
* Return: Sucess (1)
*/
int main(void)
{
char a[] = "and that piece of art is useful\" - ";
char b[] = "Dora Korpar, 2015-10-19";
	fprintf(stderr, "%s%s\n", a, b);
	return (1);
}

