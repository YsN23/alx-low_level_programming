#include "lists.h"


/**
 * add_dnodeint - add node at the beginning of the dll
 * @head: a Pointer to The head of the dll
 * Return: The New Node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	(*head)->prev = new_node;
	new_node->next = *head;

	*head = new_node;


	return (new_node);

}
