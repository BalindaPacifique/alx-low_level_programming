#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: int data
 *
 * Return: new node pointer or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_N;

	if (head == NULL)
	{
		return (NULL);
	}
	new_N = malloc(sizeof(dlistint_t));
	if (new_N == NULL)
	{
		return (NULL);
	}
	new_N->n = n;
	new_N->prev = NULL;
	new_N->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_N;
	}
	*head = new_N;
	return (new_N);
}
