#include "lists.h"

/**
 * free_list - free Palestine
 * @head: Pointer To nodes
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
