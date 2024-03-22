#include "lists.h"
/**
 * add_dnodeint- Adds new node at beggining
 * @head: the head
 * @n: The data
 * Return: Address of new element, otherwise fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
