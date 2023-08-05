#include <string.h>
#include "lists.h"
/**
 * add_node_end- Adds node at the end of list
 * @head: Pointer of first node
 * @str: The string of the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(temp->str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
