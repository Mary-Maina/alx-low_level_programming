#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	char lat;
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		putchar(let);
	}
	for (lat = 'A'; lat <= 'Z'; lat++)
	{
		putchar(lat);
	}
	putchar('\n');
	return (0);
}
