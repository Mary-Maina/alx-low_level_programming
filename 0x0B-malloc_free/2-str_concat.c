#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null if string is empt, otherwise pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int j, k, x, i;
	char *result;
	unsigned int total = 0;
	unsigned int size = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		size++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		total++;
	}
	result = (char *)malloc((size + total + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		result[x] = s1[x];
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		result[x + k] = s2[k];
	}
	result[x + k] = '\0';

	return (result);
}
