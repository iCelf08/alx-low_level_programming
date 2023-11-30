0-hash_table_create.c
#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
char *v_c;
unsigned long int index, i;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
v_c = strdup(value);
if (v_c == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = v_c;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(v_c);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = v_c;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
