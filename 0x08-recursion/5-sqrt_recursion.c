#include "main.h"
/**
 * _sqrt_recursion- Returns sqrt of natural nos.
 * @n: number to be checked
 * Return: -1 if numer does not have natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqRoot(n, 0, n));
	}
}
/**
 * sqRoot- calculates the square root of a number
 * @n: The number to be checked
 * @low: number lower than n
 * @high: Larger numbers
 * Return: square root
 */
int sqRoot(int n, int low, int high)
{
	int x;

	if (low > high)
	{
		return (-1);
	}

	x = (low + high) / 2;

	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (sqRoot(n, low, x - 1));
	}
	else
	{
		return (sqRoot(n, x + 1, high));
	}
}
