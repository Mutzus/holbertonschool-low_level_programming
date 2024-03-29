#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct list_s - provides a representation of a node in a linked list
 * @str: Pointer to a string
 * @len: Length of the string in the node
 * @next: Pointer to the next node in the linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function prototypes */
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LIST_H */
