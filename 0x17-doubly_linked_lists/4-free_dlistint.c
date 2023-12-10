#include "lists.h"

/**
 * free_dlistint - frees the nodes of dll
 * @head: Pointer to The head of dll
 * Return: Void
*/


void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head.n)
		free(head);

		head = head->next;
	}

}
