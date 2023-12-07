#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data in a doubly linked list.
 * @head: Pointer to the head node of the list.
 *
 * Returns: The sum of all the data in the list,
 *          or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}