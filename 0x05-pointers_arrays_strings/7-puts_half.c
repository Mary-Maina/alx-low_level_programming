#include "main.h"
/**
 * puts_half- Prints half a string
 * @str: The string
 * Return: Half a string
 */
void puts_half(char *str)
{
	int i = 0;
	int total = 0;
	int x = 0;
	int a;

	while (str[i] != '\0')
	{
		total++;
		i++;
	}

	x = total / 2;

	if (total % 2 != 0)
	{
		x = (total + 1) / 2;
	}

	for (a = x; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
