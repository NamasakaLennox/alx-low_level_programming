#include "hash_tables.h"

/**
 * create_node - creates a node item
 * @key: key associated with the value
 * @value: the value to be added
 *
 * Return: returns the new element created, NULL if failed
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = malloc(strlen(key) + 1);
	new->value = malloc(strlen(value) + 1);
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: key of the item
 * @value: the value to be added to the hash table
 *
 * Return: returns 1 on success, 0 if function failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **array;
	unsigned long int index;
	hash_node_t *node;

	if (!ht) /* if no table provided */
		return (0);
	if (!key || key[0] == '\0')
		return (0);

	/* get the index of the key */
	index = key_index((const unsigned char *)key, ht->size);

	array = ht->array;
	/* create a new node */
	node = create_node(key, value);
	if (!node)
		return (0);
	/* add new node to hash table */
	if (array[index]) /* if item already present at index */
	{
		node->next = array[index];
		array[index] = node;
	}
	else /* first item at the current index */
		array[index] = node;

	return (1);
}
