#include "main.h"
/**
 * is_prime_number- Function checks if number is prime
 * @n: number to be checked
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	return (prime_recursive(n, 2));
}
/**
 * prime_recursive- Calculates if number is prime using recursion
 * @n: number to be checked
 * @a: number to be repeated
 * Return: If number is prime
 */
int prime_recursive(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == a)
	{
		return (1);
	}
	else
	{
		if (n % a == 0)
		{
			return (0);
		}
		else
		{
			return (prime_recursive(n, a + 1));
		}
	}
}
