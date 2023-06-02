#include "main.h"
/**
 * _isdigit(int c)- checks for a digit between 0 and 9
 * @c: Number to be checked
 * Return: 1 if a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
