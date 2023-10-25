#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numnode = 0;

	while (h)
	{
		numnode++;
		h = h->next;
	}
	return (numnode);
}
