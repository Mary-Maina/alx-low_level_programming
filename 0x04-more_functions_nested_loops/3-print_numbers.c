#include "main.h"
/**
 * print_numbers(void)- Prints numbers from 0 to 9
 * Return: 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
