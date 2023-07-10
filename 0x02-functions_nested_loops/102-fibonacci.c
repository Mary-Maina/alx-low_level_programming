#include <stdio.h>
/**
 * main- prints the sequence of Fibonacci numbers
 * Return: 0 successful
 */
int main(void)
{
	long fibonacci[50];
	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	printf("%ld, %ld", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

		printf(", %ld", fibonacci[i]);
	}
	printf("\n");

	return (0);
}
