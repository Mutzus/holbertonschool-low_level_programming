#include <stddef.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index of the list where the new node should be added. Index starts at 0.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 *         If it is not possible to add the new node at index idx, do not add the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current_node = *h;
    unsigned int i;

    if (idx == 0)
        return add_dnodeint(h, n);  /* Use your add_dnodeint function for adding at the beginning */

    for (i = 0; i < idx - 1 && current_node != NULL; i++)
        current_node = current_node->next;

    if (i != idx - 1 || current_node == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->prev = current_node;
    new_node->next = current_node->next;

    if (current_node->next != NULL)
        current_node->next->prev = new_node;

    current_node->next = new_node;

    return new_node;
}
