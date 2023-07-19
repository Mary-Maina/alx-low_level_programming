#include "main.h"
#include <stdlib.h>
/**
 * _calloc- Allocates memory to an arrayy
 * @nmemb: elements
 * @size: Size of each byte
 * Return: NULL if fail, otherwise Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total = 0;
	void *ptr;
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = size * nmemb;

	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}
	x = (char *)ptr;
	for (i = 0; i < total; i++)
	{
		x[i] = 0;
	}
	return (ptr);
}
