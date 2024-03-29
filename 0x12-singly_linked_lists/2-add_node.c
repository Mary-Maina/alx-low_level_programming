#include "lists.h"
#include <string.h>
/**
 * add_node- adds a new node at the beginning
 * @head: Pointer to first node
 * @str: String to be added
 *
 * Return: A new node at the beginning
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(ptr->str);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
