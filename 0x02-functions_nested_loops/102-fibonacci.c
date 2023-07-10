#include <stdio.h>
/**
 * main- prints the sequence of Fibonacci numbers
 * Return: 0 successful
 */
int main(void)
{
	int fibonacci[50];
	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	printf("%d, %d", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

		printf(", %d", fibonacci[i]);
	}
	printf("\n");

	return (0);
}
