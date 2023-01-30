#include "search_algos.h"

/**
 * jump_search - Entry point
 * searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: on Success the first index of value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (array[x] < value)
	{
		printf("Value checked array[%d} = [%d]\n", (int)x, array[x]);
		x += step;
		if (x >= size)
			break;
	}
	x -= step;
	printf("Value found between indexes [%d] and [%d]\n",
					(int)x, (int)(x + step));
	while (array[x] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)x, array[x]);
		x++;
		if (x == size)
			return (-1);
	}
	if (array[x] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)x, array[x]);
		return (x);
	}
	return (-1);
}
