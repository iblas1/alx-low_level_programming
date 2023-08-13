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

for (a = 0; a < 10; a++)
{
putchar(a + '0');
if (a != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
