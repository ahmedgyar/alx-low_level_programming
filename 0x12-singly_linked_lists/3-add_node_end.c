#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/



list_t *add_node_end(list_t **head, const char *str) {
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        list_t *last = *head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }

    return new_node;
}
