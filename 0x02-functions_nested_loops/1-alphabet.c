#include "main.h"

/**
 * print_alphabet - print in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char va = 'a';

	while (letter <= 'z')
	{
	_putchar(va);
	va++;
	}
	_putchar('\n');
}
