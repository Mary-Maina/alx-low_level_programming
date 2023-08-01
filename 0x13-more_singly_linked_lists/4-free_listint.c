#include "lists.h"
/**
 * free_listint- Frees a listint
 * @head: List to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *hx;

	while (head != NULL)
	{
		hx = head->next;
		free(head);
		head = hx;
	}
}
