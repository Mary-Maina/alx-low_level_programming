#include "lists.h"
/**
 * list_len- returns the number of elements
 * @h: Pointer to the first node
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int total = 0;

	ptr = h;

	while (ptr != NULL)
	{
		total++;
		ptr = ptr->next;
	}
	return (total);
}
