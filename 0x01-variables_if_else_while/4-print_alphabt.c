#include <stdio.h>

/**
 * main - prints lowecase alphabet
 * Return: Always 0
 */
int main(void)
{
	char cv;

	for (cv = 'a'; cv <= 'z'; cv++)
	{
		if (cv != 'e' && cv != 'q')
			putchar (cv);
	}

	putchar('\n');
	return (0);
}
