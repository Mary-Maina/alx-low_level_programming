#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entr Point
 * @argc: Number of arguments
 * @argv: Vectort Arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int total = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}

	total = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", total);

	return (0);
}
