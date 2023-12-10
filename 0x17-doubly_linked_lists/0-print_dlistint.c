#include "lists.h"


/**
 * print_dlistint - prints the nodes in dll
 * @h: a pointer to the head of dll
 * Return: Num of nodes
*/


size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;
	int n;


	while (h != NULL)
	{
		n = h->n;

		printf("%d\n", n);

		h = h->next;

		num_nodes++;

	}

	return (num_nodes);

}
