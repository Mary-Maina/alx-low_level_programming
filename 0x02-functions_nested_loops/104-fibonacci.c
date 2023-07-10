#include <stdio.h>
/**
 * main- Entry Point of program
 * Return: 0
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int fib_next;
	int i;

	printf("%u, %u", fib1, fib2);

	for (i = 2; i < 98; i++)
	{
		fib_next = fib1 + fib2;

		printf(", %u", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}
	printf("\n");

	return (0);
}
