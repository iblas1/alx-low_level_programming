#include "lists.h"

/**
* print_list - return the length of a string
* @h: string
* Return: Sucess (0)
*/

size_t print_list(const list_t *h)
{
	size_t d_c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		d_c++;
		h = h->next;
	}

	return (d_c);
}

