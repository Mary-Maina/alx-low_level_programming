#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 successful
 */
int main(void)
{
	char lat;

	for (lat = 'z'; lat >= 'a'; lat--)
	{
		putchar(lat);
	}
	putchar('\n');
	return (0);
}
