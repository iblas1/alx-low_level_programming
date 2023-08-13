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
int a, b;

for (a = 0; a < 10; a++)
{
for (b = a + 1; b < 10; b++)
{
putchar(a + '0');
putchar(b + '0');
if (a < 8)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
