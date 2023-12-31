#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, else NULL for error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newptr;

	newptr = malloc(sizeof(listint_t));

	if (!newptr)
	{
		return (NULL);
	}
	newptr->n = n;
	newptr->next = *head;
	*head = newptr;

	return (newptr);
}
