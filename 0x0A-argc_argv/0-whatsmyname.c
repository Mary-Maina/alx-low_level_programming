#include <stdio.h>
/**
 * main- Entry Point of the program
 * @argc: Numbber of arguments
 * @argv: String arrays in arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
