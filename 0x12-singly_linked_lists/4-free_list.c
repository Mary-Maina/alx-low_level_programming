#include "lists.h"
/**
 * free_list- Frees a linked list
 * @head: The pointer to first node
 *
 * Return: A deeallocated function
 */
void free_list(list_t *head)
{
	list_t *ptr, *temp;

	ptr = head;

	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;

		free(temp->str);
		free(temp);
	}
}
