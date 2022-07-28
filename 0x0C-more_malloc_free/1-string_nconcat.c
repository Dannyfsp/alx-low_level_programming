#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * function that concatenates two strings
 * @s1: string parameter1
 * @s2: string parameter2
 * @n: maximum number of bytes of s2 to concatenate to s1
 * Return: on Success - NULL if function fails
 * or a pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len = n, index;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index]; index++)
	{
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (index = 0; s1[index]; index++)
	{
		ptr[len++] = s1[index];
	}

	for (index = 0; s2[index] && index < n; index++)
	{
		ptr[len++] = s2[index];
	}

	ptr[len] = '\0';
	return (ptr);
}
