#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * function that creates an array of integers
 * @min: first value of the array
 * @max: last value of the array
 * Return: on Success - NULL if function fails or if min > max
 * or a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = min++;
	}
	return (array);
}
