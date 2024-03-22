#include "lists.h"
/**
 * free_dlistint- free's a doubly linked list
 * @head: head pointer
 * Return: Freed list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *new;

	ptr = head;
	while (ptr != NULL)
	{
		new = ptr->next;
		free(ptr);
		ptr = new;
	}
}
