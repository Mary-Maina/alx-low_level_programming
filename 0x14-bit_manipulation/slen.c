#include "main.h"
/**
 * length_string- Calculates the length of a string
 * @s: String
 * Return: Total length
 */
unsigned int length_string(const char *s)
{
	unsigned int i;
	unsigned int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		total++;
	}
	return (total);
}
