#include "main.h"
/**
 * is_palindrome- checks if string is palindrome
 * @s: string to be checked
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int x = calculate_length(s);

	return (check_palindrome(s, 0, x - 1));
}
/**
 * calculate_length- calculates length of string
 * @s: string to be checked
 * Return: Length of string
 */
int calculate_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + calculate_length(s + 1));
	}
}
/**
 * check_palindrome- checks if string is palinddrome
 * @s: string to be checked
 * @left: String from left
 * @right: string from right
 * Return: string if it is palindrome
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}

