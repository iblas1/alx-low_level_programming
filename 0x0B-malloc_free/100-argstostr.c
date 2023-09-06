#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* argstostr - to concatenate argument given and separate by \n
* @ac: no of args
* @av: args
* Return: pointer to the array created
*/

char *argstostr(int ac, char **av)
{
	int i, j, count = 0;
	char *arg, *concat;

	if (!ac || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			count++;
		}
	}
	concat = malloc(count + i + 1 * sizeof(char));
	if (!concat)
	return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			concat[count++] = arg[j];
		}
		concat[count++] = '\n';
	}
	concat[count + 1] = '\0';

	return (concat);
}
