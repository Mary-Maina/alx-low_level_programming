#include "lists.h"
/**
 * sum_listint- Calclates sum of all data
 * @head: Pointer to first node
 *
 * Return: Sum of all data, if empty 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
