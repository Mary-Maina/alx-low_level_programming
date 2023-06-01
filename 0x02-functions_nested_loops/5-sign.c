#include "main.h"
#include <stdio.h>
/**
 * print_sign(int n)- Prints the sign of a number
 * @n: number to be checked
 * Return: 1 if positive, 0 when 0, and -1 when negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
