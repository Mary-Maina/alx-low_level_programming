#include "main.h"
#include <stdlib.h>
/**
 * argstostr- concatenates all the arguments of your program.
 * @ac: Number of command line arguments
 * @av: Represents actual command line arguments
 * Return: Pointer to new strings or null
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int total = 0;
	int index = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			continue;
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total++;
		}
		total++;
	}
	result = (char *)malloc((total + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			continue;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}
	result[index] = '\0';
	return (result);
}

