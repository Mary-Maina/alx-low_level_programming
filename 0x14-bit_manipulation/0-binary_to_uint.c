#include "main.h"
/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: String to be checked
 *
 * Return: Unsigned int, NULL otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, dec = 1, len = 0;
	int i;

	len = length_string(b);

	if (b == NULL)
	{
		return (0);
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		total += (b[i] - '0') * dec;
		dec = dec * 2;
	}
	return (total);
}
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
