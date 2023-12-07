#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Traverses a doubly linked list to count the number of nodes.
 * @h: Pointer to the head node of the list.
 *
 * Returns: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
