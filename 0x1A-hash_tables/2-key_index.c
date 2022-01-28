#include "hash_tables.h"
/**
 * key_index - function that returns the index where a key should be stored.
 *@key: key
 *@size: size of the ht array.
 *Return: an int, which is te corresponding index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
