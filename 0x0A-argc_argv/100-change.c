#include <stdlib.h>
#include <stdio.h>
/**
 * main- Entry Point
 * @argc: Number of arguments
 * @argv: Vectort Arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	int total = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i =  atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i > 0)
	{
		total += i / coins[x];
		i %= coins[x];
		x++;
	}
	printf("%d\n", total);

	return (0);
}
