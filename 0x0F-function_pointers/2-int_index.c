#include "function_pointers.h"
/**
 * int_index- index of the first element that is not 0
 * @cmp: Pointer that compares values
 * @size: size of array
 * @array: The array containing values
 * Return: first element that is not 0, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
