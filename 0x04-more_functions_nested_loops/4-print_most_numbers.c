#include "main.h"
/**
 * print_most_numbers(void)- prints the numbers except 2 and 4
 * Return: All numbers between 0 and 9, but not 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
