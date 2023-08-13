#include <stdio.h>
/* more headers goes there */
/**
*main - entry point
*function that print small letter except q and e
*
*Return: Always 0 (Sucess)
*/
/* betty style doc for function main goes there */

int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
	if (a != 'q' && a != 'e')
	putchar(a);

	putchar('\n');
	return (0);
}
