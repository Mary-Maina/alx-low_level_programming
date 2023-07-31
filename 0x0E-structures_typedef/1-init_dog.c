#include "dog.h"
#include <stdlib.h>
/**
 * init_dog- Initializes struct dog
 * @d: Object variable
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i, j, x, n;
	int total = 0, sum = 0;

	if (d == NULL)
	{
		return;
	}
	for (x = 0; name[x] != '\0'; x++)
	{
		total++;
	}
	for (n = 0; owner[n] != '\0'; n++)
	{
		sum++;
	}
	d->name = (char *)malloc((total + 1) * sizeof(char));
	d->owner = (char *)malloc((sum + 1) * sizeof(char));

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		return;
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		d->name[i] = name[i];
	}
	d->age = age;

	for (j = 0; owner[j] != '\0'; j++)
	{
		d->owner[j] = owner[j];
	}
}
