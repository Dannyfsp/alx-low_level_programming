#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 * function that fills memory with a constant byte
 * @s: string parameter
 * @b: character parameter
 * @n: integer parameter
 * Return: on Succes - string address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
