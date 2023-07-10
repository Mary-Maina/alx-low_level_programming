#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 successful
 */
int main(void)
{
	int p = 1;
	int c = 2;
	int total = 2;
	int n;

	while (c <= 4000000)
	{
		n = p + c;

		if (n % 2 == 0)
		{
			total += n;
		}		p = c;
		c = n;
	}
	printf("%d\n", total);
	return (0);
}
