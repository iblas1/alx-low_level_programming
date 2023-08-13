#include <stdio.h>
/* more headers goes there */
/**
*main - entry point
*function that print small letter
*
*Return: Always 0 (Sucess)
*/
/* betty style doc for function main goes there */

int main(void)
{
	int a;
	char b;

	for (a = 1; a < 10; a++)
	putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
	putchar(b);

	putchar('\n');
	return (0);
}
