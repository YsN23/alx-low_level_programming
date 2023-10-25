#include "lists.h"


/**
 * pop_listint - delete the head of a SLL
 * @head: The head of The SLL
 * Return: head->n
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *curr = *head;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = tmp->n;

	*head = curr->next;

	free(tmp);

	return (n);

}
