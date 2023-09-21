#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * struct NOde - singly linked list
 * @function: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct Node {
	void (*function)(void);
	struct Node* next;
} Node;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void print_before_main(void);
void add_function(void (*function)(void));
void before_main_message(void);
void register_message_function(void);
#endif /*LIST_H*/