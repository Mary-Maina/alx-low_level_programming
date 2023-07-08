#include "main.h"
/**
 * _islower- checks if character is lowercase
 * Return: 1 if int c is alphabet
 * @c: The character to be checked
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
