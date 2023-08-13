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
int a = 0;

while (a < 10)
{
putchar(a + '0');
a++;
}
putchar('\n');
return (0);
}
