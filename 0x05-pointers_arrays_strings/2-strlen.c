#include "main.h"
/**
 * _strlen- Prints lengths of strings
 * @s: Pointer to string
 * Return: String length
 */
int _strlen(char *s)
{
	int i;
	int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		total++;
	}
	return (total);
}
