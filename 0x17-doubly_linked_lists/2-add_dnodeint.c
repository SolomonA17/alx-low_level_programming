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
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
