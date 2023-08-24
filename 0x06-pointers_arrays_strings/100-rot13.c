#include "main.h"

/**
* rot13 - concatenate two strings together
* @str: string to capitalise
* Return: concatenated string
*/

char *rot13(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
char c = str[i];
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
char base = (c >= 'a') ? 'a' : 'A';
str[i] = ((c - base + 13) % 26) + base;
}
}
return (str);
}
