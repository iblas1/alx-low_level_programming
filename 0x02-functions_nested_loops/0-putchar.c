#include "main.h"
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
	char a[] = "_putchar";
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');
	return (0);
}
