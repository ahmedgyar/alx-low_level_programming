#include "hash_tables.h"

/**
* add_node - adds a new node at the beginning of a list
* @key: key to add
* @value: value to add
*
* Return: address of the new element, or NULL if it failed
*/

hash_node_t *add_node(const char *key, const char *value)
{

hash_node_t *node;


node = malloc(sizeof(hash_node_t));
if (!node)
return (0);

node->key = strdup(key);

if (node->key = NULL)
{
free(node);
return (NULL);
}

node->value = strdup(value);
if (node->value = NULL)
{
free(node->key);
free(node);
return (NULL);
}

node->next = NULL;
return (node);

}




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
hash_node_t *node;
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

node = add_node(key, value);
if (!node)
return (0);
node->next = ht->array[key_index1];
ht->array[key_index1] = node;
return (1);
}
