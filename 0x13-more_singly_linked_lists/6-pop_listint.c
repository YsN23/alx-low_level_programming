#include "lists.h"


/**
 * pop_listint - delete the head of a SLL
 * @head: The head of The SLL
 * Return: head->n
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL)
	{
		return (0);
	}

	tmp = *head;

	*head = (*head)->next;

	n = tmp->n;

	free(tmp);

	return (n);

}
