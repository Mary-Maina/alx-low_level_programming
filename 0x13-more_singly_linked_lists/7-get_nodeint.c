#include "lists.h"
/**
 * get_nodeint_at_index- Prints the nth node of a listint_t
 * @head: Address to first node
 * @index: index of the node
 *
 * Return: nth node of linked list, if none NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
