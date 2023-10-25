#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *empty;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		empty = (*head)->next;
		free(*head);
		*head = empty;
	}
	*head = NULL;
}
