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

	for (char a = 'a'; a < 'z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
