#include "lists.h"
/**
 * listint_len- Prints number of elements
 * @h: linked list
 *
 * Return: Number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}
	return (total);
}
