#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the list
 *
 * @index: The indx of node, starting from 0.
 *
 * Return: The nth node,
 * or NULL for error
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int indx;

	dlistint_t *ptr = head;

	for (indx = 0; ptr != NULL && indx < index; indx++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
