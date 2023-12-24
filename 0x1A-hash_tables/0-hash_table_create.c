#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hptr;
	unsigned long int indx;

	hptr = malloc(sizeof(hash_table_t));
	if (hptr == NULL)
		return (NULL);

	hptr->size = size;
	hptr->array = malloc(sizeof(hash_node_t *) * size);
	if (hptr->array == NULL)
		return (NULL);
	for (indx = 0; indx < size; indx++)
		hptr->array[indx] = NULL;

	return (hptr);
}
