#include "main.h"
#include <stdlib.h>
/**
 * _strdup()- returns a pointer to a new string a duplicate of str
 * @str: The string to be duplicated
 * Return: NULL if str = NULL, otherwise pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size = 0;
	unsigned int i;
	unsigned int x;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	ptr = (char *)malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= size; x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
