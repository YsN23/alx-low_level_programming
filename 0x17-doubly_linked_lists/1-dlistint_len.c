#include "lists.h"

/**
 * dlistint_len - dll Nodes
 * @h: Pointer To The First Node in dll
 * Return: Num of Nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}

	return (num_nodes)
}
