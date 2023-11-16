#include <stdlib.h>
#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
 */


void free_list(list_t *head) {
    list_t *tmp;

    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp->str);
        free(tmp);
    }
}