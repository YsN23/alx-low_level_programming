#include "lists.h"
/**
 * add_node - l3adab mn jadid
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: Pointer to the string to be added.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = strlen(str);
	n_node->next = *head;
	*head = n_node;


	return (n_node);
}
