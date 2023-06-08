#include "main.h"
/**
 * _sqrt_recursion(int n)- Returns square rootof a number
 * @n: Number to be checked
 *
 * Return: -1 if number is less than 1
 */
int _sqrt_recursion(int n)
{
	return (_sqroot(n, 1));
}
/**
 * _sqroot- Calculates the square root of natural numbers
 * @n: Number to be checked
 * @b: number to be repeated
 * Return: square root of natural number
 */
int _sqroot(int n, int b)
{
	int r = b * b;

	if (r > n)
	{
		return (-1);
	}
	else if (r == n)
	{
		return (b);
	}
	else
	{
		return (_sqroot(n, b + 1));
	}
}
