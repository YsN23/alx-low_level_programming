#include "lists.h"

/**
 * sum_dlistint - rsum of n data of nodes in dll
 * @head: Pointer To The Head of dll
 * Return: sum of n data
*/

int sum_dlistint(dlistint_t *head)
{
	int sum_n = 0;

	while (head != NULL)
	{
		head = head->next;

		sum_n += head->n;
	}


	return (sum_n);

}
