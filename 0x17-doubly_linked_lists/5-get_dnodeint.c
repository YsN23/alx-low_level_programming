#include "lists.h"


/**
 * get_dnodeint_at_index - return a node in dll according to index
 * @head: Pointer to the head of dll
 * @index: index
 * Return: Node or NULL
*/


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}

		i++;
		head = head->next;
	}

	return (NULL);

}
