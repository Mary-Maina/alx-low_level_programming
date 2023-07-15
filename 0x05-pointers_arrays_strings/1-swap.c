#include "main.h"
/**
 * swap_int- Swaps the values of two integers
 * @a: Pointer 1
 * @b: Pointer 2
 * Return: Swapped ints
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
