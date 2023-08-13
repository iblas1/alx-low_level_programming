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
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
	putchar(a);
	for (b = 'A'; b <= 'Z'; b++)
	putchar(b);

	putchar('\n');
	return (0);
}
