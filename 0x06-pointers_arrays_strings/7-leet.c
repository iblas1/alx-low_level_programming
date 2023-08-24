#include "main.h"

/**
* leet - concatenate two strings together
* @str: string to capitalise
* Return: concatenated string
*/

char *leet(char *str)
{
int i;
char leetTable[256];
for (i = 0; i < 256; i++)
{
leetTable[i] = (char)i;
}

leetTable['a'] = leetTable['A'] = '4';
leetTable['e'] = leetTable['E'] = '3';
leetTable['o'] = leetTable['O'] = '0';
leetTable['t'] = leetTable['T'] = '7';
leetTable['l'] = leetTable['L'] = '1';
for (i = 0; str[i] != '\0'; i++)
{
str[i] = leetTable[(int)str[i]];
}
return (str);
}
