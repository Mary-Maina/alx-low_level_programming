#include "main.h"
/**
 * print_rev- Prints string in reverse
 * @s: The string
 * Return: Reversed string
 */
void print_rev(char *s)
{
	int x = 0;
	int i;

	while (s[x] != '\0')
	{
		x++;
	}

	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
