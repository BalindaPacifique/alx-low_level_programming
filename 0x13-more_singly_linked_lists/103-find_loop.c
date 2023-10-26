#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *abb = head;
	listint_t *bcc = head;

	if (!head)
		return (NULL);

	while (abb && bcc && bcc->next)
	{
		abb = bcc->next->next;
		abb = abb->next;

		if (bcc == abb)
		{
			abb = head;
			while (abb != bcc)
			{
				abb = abb->next;
				bcc = bcc->next;
			}
			return (bcc);
		}
	}
	return (NULL);
}
