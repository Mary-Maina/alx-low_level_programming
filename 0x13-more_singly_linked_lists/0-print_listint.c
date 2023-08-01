#include "lists.h"
/**
 * print_listint- Prints all  elements in a list
 * @h: A linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
