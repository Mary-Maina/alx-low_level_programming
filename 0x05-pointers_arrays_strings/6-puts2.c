#include "main.h"
/**
 * puts2- Prints every other char
 * @str: The string
 * Return: Every other character
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i += 2;
	}
	_putchar('\n');
}
