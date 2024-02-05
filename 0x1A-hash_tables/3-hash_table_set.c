#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    unsigned long int key_index1;
    hash_node_t *current;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    key_index1 = key_index((const unsigned char *)key, ht->size);
    current = ht->array[key_index1];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (!current->value)
                return (0);
            return (1);
        }
        current = current->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[key_index1];
    ht->array[key_index1] = new_node;

    return (1);
}