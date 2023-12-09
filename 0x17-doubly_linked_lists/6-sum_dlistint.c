#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data
 * @head: A pointer to the head
 *
 * Return: The sum
 * or 0 empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
