#include "main.h"
/**
 * factorial(int n)- returns the factorial of a number
 * @n: The integer we are checking the factorial for
 * Return: -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
