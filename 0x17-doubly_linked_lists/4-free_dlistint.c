#include "lists.h"

/**
* free_dlistint - frees the nodes of dll
* @head: Pointer to The head of dll
* Return: Void
*/


void free_dlistint(dlistint_t *head)
{
	dlistint_t *swt;

	while (head != NULL)
	{
		swt = head;
		head = head->next;
		free(swt);
	}
}
