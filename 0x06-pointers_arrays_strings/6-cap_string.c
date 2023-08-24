#include "main.h"

/**
* cap_string - concatenate two strings together
* @str: string to capitalise
* Return: concatenated string
*/

char *cap_string(char *str)
{
	int capitalize_next = 1; 

	for (int i = 0; str[i] != '\0'; i++)
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' ||
	str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
	capitalize_next = 1;
	} 
	else if (capitalize_next && islower(str[i]))
	{
	str[i] = toupper(str[i]);
	capitalize_next = 0;     
	} 
	else 
	{
	capitalize_next = 0; 
	}
	return (str);
}
}
