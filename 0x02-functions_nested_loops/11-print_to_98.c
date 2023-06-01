#include <stdio.h>
#include "main.h"
/**
 * print_to_98(int n)- Prints natural numbers
 * @n: number to start the sequence
 * Return: Sequence of numbers to 98
 */
void print_to_98(int n)
{
	int i;

	printf("%d", n);

	if (n < 99)
	{
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else
	{
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	printf("\n");
}
