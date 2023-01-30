#include "search_algos.h"

/**
 * binary_search - Entry point
 * searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: on Success the first index located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int min, mid, max;
	int i;

	if (array == NULL)
		return (-1);
	min = 0;
	max = size - 1;

	while (min <= max)
	{
		mid = (min + max) / 2;

		printf("Searching in array: ");
		for (i = min; i <= max; i++)
			printf("%i%s", array[i], i == max ? "\n" : ", ");

		if (array[mid] < value)
			min = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
