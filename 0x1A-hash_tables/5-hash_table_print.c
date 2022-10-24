#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table, Order: array, list
 * @ht: the hash table
 * If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *tmp;

	i = j = 0;
	if (!ht)
		return;
	putchar('{');
	for (i = j = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				printf("%s'%s': '%s'", j == 0 ? "" : ", ", tmp->key, tmp->value), j++;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
