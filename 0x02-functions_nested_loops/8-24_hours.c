#include "main.h"
/**
 * jack_bauer(void)- Prints every minute of the day of Jack Bauer
 * Return: Minutes and day
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar(48);
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

			_putchar(':');

			if (j < 10)
			{
				_putchar(48);
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
