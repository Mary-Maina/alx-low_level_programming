#include "main.h"
/**
 * more_numbers(void)- Prints 0 to 14 ten times
 * Return: 0 to 14 ten times
 */
void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x < 10)
			{
				_putchar(x + '0');
			}
			else if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
