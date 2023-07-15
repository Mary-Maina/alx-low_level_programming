#include "main.h"
/**
 * rev_string- Reverses strings
 * @s: Pointer to the string
 * Return: Reverse string
 */
void rev_string(char *s)
{
	char temp;
	int x = 0;
	int i = 0;
	int j = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	j = x - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
