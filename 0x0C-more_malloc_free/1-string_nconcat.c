#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat- concatenates two strings
 * @s1: Pointer to string 1
 * @s2: Pointer to string 2
 * @n: total number of bytes
 * Return: NULL if empty strin, else Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, k, x;
	unsigned int total = 0;
	unsigned int sum = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		total++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		sum++;
	}
	if (n >= sum)
	{
		n = sum;
	}
	result = (char *)malloc((total + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		result[x] = s1[x];
	}
	for (k = 0; k < n; k++)
	{
		result[x + k] = s2[k];
	}
	result[x + k] = '\0';
	return (result);
}
