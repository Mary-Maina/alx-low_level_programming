#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked- Allocates memory using malloc
 * @b: int to be allocated
 * Return: Pointer, if fail 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
