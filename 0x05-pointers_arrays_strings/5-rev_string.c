#include "main.h"
#include <stdio.h>
/**
* rev_string - print strings
* @s: string to print
*/

void rev_string(char *s)
{

int length;
int start;
int end;
char temp;

length = 0;
while (s[length] != '\0')
{
length++;
}
if (length <= 1)
{
return;
}
start = 0;
end = length - 1;
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
