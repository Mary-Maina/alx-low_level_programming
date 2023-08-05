#include "lists.h"
/**
 * print_list-  prints all the elements of a list
 * @h: The head pointer
 *
 * Return: Number of nodes, if string is empty NULL
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	unsigned int total = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		total++;
	}
	return (total);
}
