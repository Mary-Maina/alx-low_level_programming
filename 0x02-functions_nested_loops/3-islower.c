#include "main.h"
/**
 * _islower- Checks for lower characters
 * @c: The integer to be checked
 *
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
