#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * function that frees dog
 * @d: the dog to be freed
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->age);
	free(d);
}
