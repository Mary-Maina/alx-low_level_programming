#include "main.h"
/**
 * _isalpha- Checks for alphabetic letters
 * @c: The char to be checked
 *
 * Return: 1 if letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
