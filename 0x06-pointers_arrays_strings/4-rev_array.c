#include "main.h"

/**
 * reverse_array - Entry point
 * function that reverses the content of an array
 * @a: pointer parameter 1
 * @n: an element of the array
 */
void reverse_array(int *a, int n)
{
	int *p;
	int i;
	int j;
	int k;

	p = a;
	for (i = 0; i < n; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		j = a[k];
		a[k] = *p;
		*p = j;
		p--;
	}
}
