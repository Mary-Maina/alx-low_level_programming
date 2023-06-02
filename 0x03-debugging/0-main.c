#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 successful
 */
int main(void)
{
	int i = 0;

	positive_or_negative(i);

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if ( i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
