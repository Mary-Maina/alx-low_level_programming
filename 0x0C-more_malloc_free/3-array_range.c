#include "main.h"
#include <stdlib.h>
/**
 * array_range- Creates an array of int
 * @min: Minimum value
 * @max: Max vale of array
 * Return: Ptr, null if fail
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x;
	int total = 0;

	if (min > max)
	{
		return (NULL);
	}

	total =  max - min + 1;
	ptr = (int *)malloc(total * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < total; x++)
	{
		ptr[x] = min + x;
	}
	return (ptr);
}
