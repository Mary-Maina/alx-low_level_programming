#include "main.h"
/**
 * factorial- returns the factorial of a number
 * @n: Integer to be checked
 * Return:if n is less than 0 return -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
