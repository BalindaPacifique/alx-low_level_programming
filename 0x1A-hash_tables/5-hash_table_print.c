#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *link;
	unsigned long int indx;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (indx = 0; indx < ht->size; indx++)
	{
		if (ht->array[indx] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			link = ht->array[indx];
			while (link != NULL)
			{
				printf("'%s': '%s'", link->key,link->value);
				link = link->next;
				if (link != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
