#include <stdio.h>
/**
 * main - Entry Point of program
 * Return: 0 when successful
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
