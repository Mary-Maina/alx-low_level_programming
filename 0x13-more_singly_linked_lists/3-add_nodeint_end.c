#include "lists.h"
/**
 * add_nodeint_end- Adds a node at the end of the list
 * @head: Address to the first element
 * @n: The number to be added
 *
 * Return: Address to new element, otherwise null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *temp = *head;

	x = malloc(sizeof(listint_t));

	if (!x)
	{
		return (NULL);
	}
	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = x;
	return (x);
}
