#include "lists.h"

/**
 * listint_len - prints the lenght of a LL
 * @h: header
 * Return: Num Nodez
*/


size_t listint_len(const listint_t *h)
{
	size_t num_nodez = 0;

	while (h != NULL)
	{
		num_nodez += 1;
		h = h->next;
	}

	return (num_nodez);

}
