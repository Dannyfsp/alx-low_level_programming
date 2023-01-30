#include "search_algos.h"

/**
 * linear_search - Entry point
 * search the first occurency of a value in the array
 * @array: set of numbers
 * @size: size of the array
 * @value: value of search
 * Return: on Success the first index located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, (int) array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
