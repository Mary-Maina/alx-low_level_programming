#include "lists.h"
/**
 * print_len- Prints the length of a string
 * @s: String to be checked
 *
 * Return: Length of string
 */
int print_len(char *s)
{
	int total = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		total++;
	}
	return (total);
}
