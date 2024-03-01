#include "main.h"
/**
 * _strncat- Concatenates strings to a certain extent
 * @dest: The frst string
 * @src: The second string
 * @n: Number of bytes
 * Return: string until the n bytes when successful
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int j;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		*ptr++ = src[j];
	}
	*ptr = '\0';
	return (dest);
}
