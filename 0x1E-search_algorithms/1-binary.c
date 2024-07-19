#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search- Searches a value in an array using binary search
 * @array: The first element of the array
 * @size: The sixe of array
 * @value: The int we are searching for
 * Return: The index of array, otherwiae -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid = 0, high = 0, low = 0;

	if (array == NULL)
		return (-1);
	high = size - 1; /*This is because index starts at 0*/
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		/*checking the subarray*/
		if (low <= high)
		{
			printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i != high)
					printf(", ");
			}
			printf("\n");
		}
	}
	return (-1);
}
