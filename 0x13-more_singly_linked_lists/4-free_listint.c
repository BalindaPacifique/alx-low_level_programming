#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: listint_t list to be freed
 *
 * Return: empty
 */

void free_listint(listint_t *head)
{
	listint_t *empty;

	while (head)
	{
		empty = head->next;
		free(head);
		head = empty;
	}
}
