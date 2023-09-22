#include "lists.h"

/**
* add_function - return the length of a string
* @function: string
* Return: Sucess (0)
*/


void add_function(void (*function)(void))
{
Node *leading_node = NULL;
	Node *recent_node = (Node *)malloc(sizeof(Node));

	if (recent_node == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}
	recent_node->function = function;
	recent_node->next = leading_node;
	leading_node = recent_node;
}

/**
* before_main_message - return the length of a string
*/

void before_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

__attribute__((constructor))

/**
* register_message_function - return the length of a string
*/
void register_message_function(void)
{
	add_function(before_main_message);
}
