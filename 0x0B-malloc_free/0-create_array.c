#include "main.h"
#include <stdlib.h>
/**
 *  *create_array- creates an array of character
 *  @size: size of the array
 *  @c: The character to be initialized
 *  Return: 0 ifs size is null, otherwise pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
