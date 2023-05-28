#include <stdio.h>
/**
 * main - Entry Point of code
 * Return: 0 always
 */
int main(void)
{
	char lat;

	for (lat = 'a'; lat <= 'z'; lat++)
	{
		if (lat == 'q' || lat == 'e')
		{
			continue;
		}
		putchar(lat);
	}
	putchar('\n');
	return (0);
}
