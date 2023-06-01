#include "main.h"
#include <stdio.h>
/**
 * times_table(void)-Prints the 9 timetable
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = i * j;

			if (x > 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			if (x < 10)
			{
			_putchar(x + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
