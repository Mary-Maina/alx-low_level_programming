#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers- Prints numbers
 * @separator: String to be printed before each num
 * @n: Number of integers
 * Return: Numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	x = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	{
		printf("\n");
	}
}
