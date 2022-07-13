#include "main.h"

/**
 * swap_int - Entry point
 * function that swaps the values of two integers
 * @a: parameter1
 * @b: parameter2
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
