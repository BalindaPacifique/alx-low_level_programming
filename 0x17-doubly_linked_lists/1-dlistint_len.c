#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: A pointer to the head
 *
 * Return: The number of elem in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count_elem = 0;

	if (h == NULL)
	{
		return (count_elem);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		h = h->next;
		count_elem++;
	}
	return (count_elem);
}
