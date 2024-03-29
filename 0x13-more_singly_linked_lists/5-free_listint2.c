#include "lists.h"
/**
 * free_listint2- frees a listint_t list
 * @head: Pointer to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
