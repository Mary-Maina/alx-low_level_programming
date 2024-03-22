#include "lists.h"
/**
 * insert_dnodeint_at_index- Adds a node at nth index
 * @h: head pointer
 * @idx: nth index
 * @n: data
 * Return: Index, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
	}
	ptr = *h;
	while (ptr != NULL)
	{
		if (count == idx - 1)
		{
			new->next = ptr->next;
			if (ptr->next != NULL)
			{
				ptr->next->prev = new;
			}
			ptr->next = new;
			new->prev = ptr;
			return (new);
		}
		ptr = ptr->next;
		count++;
	}
	free(new);
	return (NULL);
}
