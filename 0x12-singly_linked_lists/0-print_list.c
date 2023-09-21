#include "lists.h"

/**
 * print_list - prints the elements of a list_t list
 * @h: Pointer to the head node
 * Return: Numbers of nodes
*/

size_t print_list(const list_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		num_nodes += 1;
	}
	return (num_nodes);

}
