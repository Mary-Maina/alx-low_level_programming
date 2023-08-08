#include "main.h"
/**
 * print_binary- prints the binary representation of a number
 * @n: The integer to be converted
 *
 * Return: Binary of Number
 */
void print_binary(unsigned long int n)
{
	unsigned int start = 0, bit = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 63; i >= 0; i--)
	{
		bit = (n >> i) & 1;

		if (bit == 1)
		{
			start = 1;
		}
		if (start)
		{
			_putchar('0' + bit);
		}
	}
}
