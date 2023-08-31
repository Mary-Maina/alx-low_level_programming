#include "main.h"
/**
 * binary_to_uint- Converts to binary number
 * @b: The unsigned int
 *
 * Return: the binary number, or 0 if b is NULL or not 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
