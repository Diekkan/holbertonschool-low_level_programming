#include "hash_tables.h"
/**
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	char flag = 0;
	unsigned long int size = 0, i = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	size = ht->size;
	printf("{");
	while (i < size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if ((i > 0) && (flag != 0))
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
