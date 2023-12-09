#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The data to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_N, *tmp;

	new_N = malloc(sizeof(dlistint_t));
	if (new_N == NULL)
	{
		return (NULL);
	}
	new_N->n = n;
	new_N->next = NULL;

	tmp = *head;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_N;
	}
	else
	{
		*head = new_N;
	}
	new_N->prev = tmp;
	return (new_N);
}
