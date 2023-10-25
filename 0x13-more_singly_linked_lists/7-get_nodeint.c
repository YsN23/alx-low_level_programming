#include "lists.h"

/**
* get_nodeint_at_index - get the nth node according to its index
* @head: head of SLL
* @index: index of nodes
* Return: The Node found
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
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
