#include "main.h"
/**
 * print_last_digit- Prints the last digit of integer
 * @n: The integer
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = -x;
	}
	_putchar('0' + x);
	return (x);
}
