#include <stdio.h>
/**
 * main- Entry Point of program
 * Return: 0
 */
int main(void)
{
	unsigned int fibonacci[98];
	int i;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	printf("%u, %u", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 98; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		printf(", %u", fibonacci[i]);
	}
	printf("\n");

	return (0);
}
