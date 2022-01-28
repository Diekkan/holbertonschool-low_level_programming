#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *@ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size = 0, i = 0;
	hash_node_t *tmp = NULL, *aux = NULL;
	if (!ht)
		return;
	size = ht->size;
	while (i < size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->value);
			free(tmp->key);
			aux = tmp;
			tmp = tmp->next;
			free(aux);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
