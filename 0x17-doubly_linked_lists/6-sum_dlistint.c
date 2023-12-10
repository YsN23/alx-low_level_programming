#include "lists.h"

/**
 * sum_dlistint - rsum of n data of nodes in dll
 * @head: Pointer To The Head of dll
 * Return: sum of n data
*/

int sum_dlistint(dlistint_t *head)
{
	int sum_n = 0;

	if (head == NULL)
	{
		return (0);
	}


	while (head != NULL)
	{
		sum_n += head->n;
		head = head->next;
	}


	return (sum_n);

}
