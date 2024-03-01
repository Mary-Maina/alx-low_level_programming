#include "main.h"
/**
 * _strcat- Concatenats strings
 * @dest: String 1
 * @src: String 2
 * Return:  Concatenated strings when successful
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	int j;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		*ptr++ = src[j];
	}
	*ptr = '\0';/*Inputing null after sting*/
	return (dest);
}
