#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - Uses linear search algorithm to find value in an array
 * @array: The first element
 * @size: The size of array
 * @value: The value we are looking for
 *
 * Return: The index of the value, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
