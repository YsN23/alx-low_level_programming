#include "lists.h"

/**
 * sum_listint - Get The Sum Of Nodes Data n
 * @head: head of the node
 * Return: Sum of Nodes Data (n)
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
