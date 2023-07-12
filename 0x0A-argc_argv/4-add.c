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
	int i;
	int total = 0;
	char *s;

	if (argc == 1)
	{
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = strtol(argv[i], &s, 10);

		if (*s != '\0')
		{
			printf("Error\n");
			return (1);
		}
		if (num > 0)
		{
			total += num;
		}
	}
	printf("%d\n", total);
	return (0);
}
