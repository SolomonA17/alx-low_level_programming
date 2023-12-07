#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list,
 * from head to tail.
 * @h: Pointer to the head node of the list.
 *
 * Return: The No of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
