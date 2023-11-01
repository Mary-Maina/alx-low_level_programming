#include "main.h"
/**
 * times_table- Prints 9 times table
 *
 * Return: Times table
 */
void times_table(void)
{
	int i;
	int j;
	int x = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;

			if (j == 0)
			{
				_putchar ('0' + x);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (x < 10)
				{
					_putchar(' ');
				}
				else if (x >= 10)
				{
					_putchar ('0' + (x / 10));
				}
				else
				{
					_putchar(' ');
				}
				_putchar('0' + (x % 10));
			}
		}
		_putchar('\n');
	}
}
