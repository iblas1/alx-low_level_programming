#include "lists.h"

/**
* list_len - return the length of a string
* @h: string
* Return: Sucess (0)
*/

size_t list_len(const list_t *h)
{
	size_t n_c = 0;

	while (h != NULL)
	{
		n_c++;
		h = h->next;
	}

	return (n_c);
}

