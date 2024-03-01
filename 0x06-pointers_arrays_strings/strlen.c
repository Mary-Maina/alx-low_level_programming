#include "main.h"
/**
 * _strlen- Returns the length of a string
 * @c: The string
 * Return: String length when successful
 */
int _strlen(const char *c)
{
	int i;
	int total = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		total++;
	}
	return (total);
}
