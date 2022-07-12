#include "hash_tables.h"

/**
 * key_index - hashing function to get the index
 * @key: key string
 * @size: size of the hash table
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key)  % size;
	return (index);
}
