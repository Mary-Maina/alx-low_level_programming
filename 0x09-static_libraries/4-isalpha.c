#include "main.h"
/**
 * _isalpha(int c)- checks for alphabetical letters
 * @c:The character to be checked
 * Return: 1 if it is a letter, 0 otherwise
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
