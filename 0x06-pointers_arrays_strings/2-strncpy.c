#include "main.h"
/**
 * _strncpy- Copies a string
 * @dest: The first string
 * @src: The second string
 * @n: Number of bytes
 * Return: Copied strig
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (ptr);
}
