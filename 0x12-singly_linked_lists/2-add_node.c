#include "lists.h"
/**
* add_node - return the length of a string
* @str: string
* @head: head
* Return: Sucess (0)
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *recent_node;

	if (str == NULL)
		return (NULL);

	recent_node = malloc(sizeof(list_t));

	if (recent_node == NULL)
		return (NULL);

	recent_node->str = strdup(str);
	if (recent_node->str == NULL)
	{
		free(recent_node);
		return (NULL);
	}

	recent_node->len = strlen(str);
	recent_node->next = *head;
	*head = recent_node;

	return (recent_node);
}

