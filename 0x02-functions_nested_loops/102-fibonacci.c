#include <stdio.h>
#include "main.h"
/**
 * main- prints the sequence of Fibonacci numbers
 * Return: 50 Fibonacci numbers
 */
int main(void)
{
	int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	printf("%d, %d", fibonacci[0], fibonacci[1]);

	for (int i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

		printf(", %d", fibonacci[i]);
	}
	printf("\n");
}
