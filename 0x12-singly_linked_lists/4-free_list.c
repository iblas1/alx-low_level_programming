#include "lists.h"

/**
* free_list - return the length of a string
* @head: head
* Return: Sucess (0)
*/

void free_list(list_t *head)
{
	list_t *latest = head;

	while (latest != NULL)
	{
		list_t *next = latest->next;

		free(latest->str);
		free(latest);
		latest = next;
	}
}

