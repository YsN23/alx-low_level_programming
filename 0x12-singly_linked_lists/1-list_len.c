#include "lists.h"

/**
 * list_len - l3adab ach ghadir
 * @h: Pointer To Nodes
 * Return: Num Nodes
*/

size_t list_len(const list_t *h)
{
	int num_ = 0;

	while (h != NULL)
	{
		num_ += 1;
		h = h->next;
	}

	return (num_);

}
