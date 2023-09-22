#include "lists.h"

/**
* free_list - return the length of a string
* @head: string
* Return: Sucess (0)
*/


void free_list(list_t *head)
{
	list_t *recent = head;

	while (recent != NULL)
	{
		list_t *next_node = recent->next;

		free(recent->str);
		free(recent);
		recent = next_node;
	}
}
