#include "lists.h"
/**
 * pop_listint- Deletes headd node and returns the head node’s data (n)
 * @head: The address of first node
 *
 * Return: The data in the head node, otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int afs;

	if (!head || !*head)
	{
		return (0);
	}
	afs = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (afs);
}
