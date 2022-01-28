#include "hash_tables.h"
/**
 * hash_table_get - gets a value form a hash table.
 *@ht: pointer to hashtable
 *@key: key value
 *Return: returns the value string in success, NULL if not.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int Index = 0;
	hash_node_t *move = NULL;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);

	Index = key_index((unsigned char *)key, ht->size);

	move = ht->array[Index];
	while (move)
	{
		if (strcmp(key, move->key) == 0)
			return (move->value);
		move = move->next;
	}

	return (NULL);
}
