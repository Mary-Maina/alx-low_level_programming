#include "main.h"
/**
 * print_times_table(int n)- Prints the n times table
 * @n: The number to be checked
 * Return: Time tabe upto n
 */
void print_times_table(int n)
{
	int x, j, xo;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (j = 0; j <= n; j++)
			{
				xo = x * j;
				if (j == 0)
					_putchar(xo + '0');
				else if (j != 0 && xo < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(xo + '0');
				}
				else if (xo >= 10 && xo < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((xo / 10) + '0');
					_putchar((xo % 10) + '0');
				}
				else if (xo >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((xo / 100) + '0');
					_putchar(((xo / 10) % 10) + '0');
					_putchar((xo % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
