#include "lists.h"
/**
 * add_nodeint- Adds node at the beginning of list
 * @head: Pointer to first node
 * @n: The new node
 *
 * Return: Address to new node, otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	if (!x)
	{
		return (NULL);
	}
	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}
