#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 always
 */
int main(void)
{
	int b;
	int a;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			putchar(',');

			if (a != 99 || b != 99)
			{
				putchar(' ');
			}
		}
	}
	return (0);
}
