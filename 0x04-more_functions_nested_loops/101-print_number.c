#include "main.h"

/**
* print_number - print straight lines
*@n: number of lines
*/

void print_number(int n)
{
int num;
int digit;
int divisor;
if (n < 0)
{
_putchar('-');
n = -n;
}
divisor = 1;
num = n;
num = n;
while (num / 10 > 0)
{
divisor *= 10;
num /= 10;
}
num = n;
while (divisor > 0)
{
digit = num / divisor;
_putchar(digit + '0');
num %= divisor;
divisor /= 10;
}
}
