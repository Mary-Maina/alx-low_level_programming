#include "lists.h"
/**
 * sum_dlistint- Sum of all data
 * @head: head pointer
 * Return: Total
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int total = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		total += ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
