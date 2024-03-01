#include "main.h"
/**
 * reverse_array- Reverses integers
 * @a: The integer array
 * @n: Number of elements
 * Return: Reversed array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
