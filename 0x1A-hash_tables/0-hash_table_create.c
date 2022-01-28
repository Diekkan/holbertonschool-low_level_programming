#include "hash_tables.h"
/**
 * hash_table_create - function that creates a Hashtable.
 *@size: size of the ht array.
 *Return: returns a pointer to the hashtable.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash = NULL;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);
	newhash->size = size;
	newhash->array = malloc(sizeof(hash_node_t *) * newhash->size);
	if (newhash->array == NULL)
		return (NULL);
	for (; i < newhash->size; i++)
		newhash->array[i] = NULL;

	return (newhash);
}
