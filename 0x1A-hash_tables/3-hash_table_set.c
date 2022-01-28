#include "hash_tables.h"
/**
 * hash_table_set - set a hashtable.
 *@ht: hashtable val.
 *@key: key value
 *@value: value to be stored
 *Return: returns 1 in success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int newIndex = 0;
	hash_node_t *nNode = NULL;

	if ((ht == NULL) || (key == NULL))
		return (0);
	newIndex = key_index((const unsigned char *)key, ht->size);
	if ((key_finder(&(ht->array[newIndex]), value, key) == NULL))
		nNode = add_node(&(ht->array[newIndex]), value, key);
	else
		return (1);

	if (!nNode)
		return (0);
	return (1);
}

/**
 * add_node - adds a new node at the begining.
 *@head: first node.
 *@str: string to be duplicated.
 *@key: key value
 *Return: address of the new node.
 */
hash_node_t *add_node(hash_node_t **head, const char *str, const char *key)
{
	hash_node_t *nNode;

	nNode = malloc(sizeof(hash_node_t));
	if (nNode == NULL)
		return (NULL);

	nNode->value = strdup(str);
	if (nNode->value == NULL)
	{
		free(nNode);
		return (NULL);
	}

	nNode->key = strdup(key);
	nNode->next = *head;
	*head = nNode;

	return (nNode);
}

/**
 * key_finder - finds if key already exists on index
 *@head: head pointer
 *@key: key value
 *@value: value
 *Return: NULL if key not found in index, or pointer to key.
 */
hash_node_t *key_finder(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp = NULL;
	
	tmp = *head;
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	return (NULL);
}

