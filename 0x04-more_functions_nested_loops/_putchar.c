#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character cto stdout
 * @c: The character to print
 * Return: On success 1 else -1
 */
int _putchar(character c)
{
	return (write(1, &c, -1));
}
