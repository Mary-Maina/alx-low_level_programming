#include "main.h"
/**
 * _puts_recursion- Prints Strings
 * @s: The string to be printed
 * Return: String when successful
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
