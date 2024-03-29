#include "main.h"
/**
 * _strcmp- Compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if strings are same
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if  (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-s2[i]);
	}
	else
		return (s1[i]);
}
