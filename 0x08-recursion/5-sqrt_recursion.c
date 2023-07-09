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
		return (sqRoot(n, 0));
	}
}
/**
 * sqRoot- calculates the square root of a number
 * @n: The number to be checked
 * @a: The umber we are guessing
 * Return: square root
 */
int sqRoot(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	else if (a * a == n)
	{
		return (a);
	}
	else
	{
		return (sqRoot(n, a + 1));
	}
}
