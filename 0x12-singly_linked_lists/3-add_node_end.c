#include "lists.h"


/**
* add_node_end - return the length of a string
* @head: headddd
* @str: string
* Return: Sucess (0)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recent_node = malloc(sizeof(list_t));

	if (recent_node == NULL)
	{
		return (NULL);
	}

	recent_node->str = strdup(str);

	if (recent_node->str == NULL)
	{
		free(recent_node);
		return (NULL);
	}

	recent_node->len = strlen(str);
	recent_node->next = NULL;

	if (*head == NULL)
	{
		*head = recent_node;
	} else

	{
		list_t *now_value = *head;

		while (now_value->next != NULL)
		{
			now_value = now_value->next;
		}
		now_value->next = recent_node;
	}

	return (recent_node);
}

