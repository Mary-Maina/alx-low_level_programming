#include "lists.h"
/**
 * add_dnodeint_end- Adds node at the end
 * @head: The head pointer
 * @n: The data
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	dlistint_t *last = malloc(sizeof(dlistint_t));

	if (last == NULL)
		return (NULL);

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		last->prev = NULL;
		*head = last;
		return (last);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = last;
	last->prev = ptr;
	return (last);
}
