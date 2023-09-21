#include "lists.h"

/**
* add_node_end - return the length of a string
* @str: string
* @head: head
* Return: Sucess (0)
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *latest_node = malloc(sizeof(list_t));

	if (latest_node == NULL)
		return (NULL);

	latest_node->str = strdup(str);
	if (latest_node->str == NULL)
	{
		free(latest_node);
		return (NULL);
	}

	latest_node->len = strlen(str);
	latest_node->next = NULL;

	if (*head == NULL)
	{
		*head = latest_node;
	}
	else
	{
		list_t *latest = *head;

		while (latest->next != NULL)
		{
			latest = latest->next;
		}
		latest->next = latest_node;
	}

	return (latest_node);
}

