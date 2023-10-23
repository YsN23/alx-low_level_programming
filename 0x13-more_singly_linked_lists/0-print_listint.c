#include "lists.h"

/**
 * print_listint - rak fahem
 * @h: head
 * Return: Num of Nodez
*/

size_t print_listint(const listint_t *h)
{
	size_t num_nodez = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodez += 1;
		h = h->next;
	}

	return (num_nodez);

}
