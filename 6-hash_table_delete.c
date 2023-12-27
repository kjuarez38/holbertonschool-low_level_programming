#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	/* loop through the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* free the linked list at each index */
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	/* free the array and the hash table structure */
	free(ht->array);
	free(ht);
}

