#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * function that executes a function given 
 * as a parameter on each element of an array
 * @array: array to execute function on
 * @size: size of array
 * @action: pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
