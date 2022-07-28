#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 * function that allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size:number of bytes
 * Return: on Success - NULL if function fails or if nmemb = 0/size = 0
 * or a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *c;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}

	c = mem;

	for (index = 0; index < (nmemb * size); index++)
	{
		c[index] = '\0';
	}
	return (mem);
}
