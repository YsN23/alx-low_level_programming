#include "lists.h"

/**
* free_listint - frees LL
* @head: head
* Return: Void
*/

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
