#include "lists.h"

/**
 * free_listint2 - frees Nodes in Linked List
 * @head: head of The LL
 * Return: Void
*/

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
	*head = NULL;
}
