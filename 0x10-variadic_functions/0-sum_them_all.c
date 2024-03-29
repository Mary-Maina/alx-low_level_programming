#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- Prints sum of all arguments
 * @n: The first value
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned  int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
