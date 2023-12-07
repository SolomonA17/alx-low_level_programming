#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specific index in a
 *                           doubly linked list.
 * @head: Pointer to the head node of the list.
 * @index: The index of the node to be retrieved, starting from 0.
 *
 * Returns: Pointer to the node at the given index,
 *          or NULL if the index is out of bounds.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
