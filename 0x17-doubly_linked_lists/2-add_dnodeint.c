#include "lists.h"

/**
 * add_dnodeint - Allocates and inserts a new node at the beginning of a
 *                   doubly linked list.
 * @head: Double pointer to the head node of the list.
 * @n: Value to be stored in the new node.
 *
 * Returns: Pointer to the newly created node,
 *          or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
