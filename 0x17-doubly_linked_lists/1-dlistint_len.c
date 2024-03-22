#include "lists.h"
/**
 * dlistint_len - Rturns the number of elements
 * @h: head pointer
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
