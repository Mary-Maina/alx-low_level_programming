#include "main.h"
/**
 * print_last_digit(int)- Prints the last digit of a number
 * @c: number to be checked
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int i;

	if (c < 0)
	{
		c = -c;
	}

	i = c % 10;

	_putchar(i + '0');

	return (i);
}
