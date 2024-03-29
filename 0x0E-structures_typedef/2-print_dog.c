#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog- Prints the struct dog
 * @d: Pointer to struct
 * Return: Members, otherwise null
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
