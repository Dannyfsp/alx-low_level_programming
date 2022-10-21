#include "hash_tables.h"

/**
 * key_index - Entry point
 * function that gives the index of a key
 * @key: the key to get the index of
 * @size: the size of the array of the hash table
 *
 * Return: on Success the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
