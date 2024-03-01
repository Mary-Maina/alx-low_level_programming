#include "main.h"
/**
 * _strcat- Concatenats strings
 * @dest: String 1
 * @src: String 2
 * Return:  Concatenated strings when successful
 */
char *_strcat(char *dest, char *src)
{
	int i = _strlen(dest);
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';/*Inputing null after sting*/
	return (dest);
}
