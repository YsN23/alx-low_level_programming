#include "lists.h"

/**
 * add_dnodeint_end - adds a node in the end of dll
 * @head: a double pointer to the head of dll
 * @n: data int
 * Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	/*new_node->prev = NULL;*/


	if (!curr) /*!head*/
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	else
	{

		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		curr->next = new_node;
		new_node->prev = curr;

	}

	return (new_node);
}
