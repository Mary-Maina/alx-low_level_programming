#include "main.h"
/**
 * _sqrt_recursion- Returns the natural square root
 * @n: number to be checked
 * return: -1 if numer does not have natural square root
 */
int sqt_recursion(int n, int g, int x)
{
	int guess = (g + n / g) / 2;

	if (guess < 0)
	{
		guess = -guess;
	}
	if (guess * guess - n < x)
	{
		return (guess);
	}
	else
	{
		return sqt_recursion(int n, int g, int x);
	}
}
/**
 * _sqrt_recursion- Returns the natural square root
 * @n: number to be checked
 * Return: -1 if numer does not have natural square root
 */
int _sqrt_recursion(int n)
{

