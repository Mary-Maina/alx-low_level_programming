#include "main.h"
/**
 * is_prime_number- Prints if a numer is prime
 * @n: The integer to be checked
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_i(n, 2));
	}
}
/**
 * prime_i- calculates the prime of a number
 * @n: integer to check
 * @a: number guesses
 * Return: 0 if number is prime
 */
int prime_i(int n, int a)
{
	if (a >= n)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	else
	{
		return (prime_i(n, a + 1));
	}
}
