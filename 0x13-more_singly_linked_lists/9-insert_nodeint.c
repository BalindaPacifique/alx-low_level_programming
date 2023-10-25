#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newptr;
	listint_t *empty = *head;

	newptr = malloc(sizeof(listint_t));
	if (!newptr || !head)
	{
		return (NULL);
	}
	newptr->n = n;
	newptr->next = NULL;
	if (idx == 0)
	{
		newptr->next = *head;
		*head = newptr;
		return (newptr);
	}
	for (j = 0; empty && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newptr->next = empty->next;
			empty->next = newptr;
			return (newptr);
		}
		else
			empty = empty->next;
	}
	return (NULL);
}
