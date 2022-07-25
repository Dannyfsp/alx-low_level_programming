#include "main.h"

/**
 * str_concat - Entry point
 * function that concatenates two strings
 * @s1: string parameter1
 * @s2: string parameter2
 * Return: on Success - s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	l = i + j;

	ptr = (char *)malloc(l * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (k < l)
	{
		if (k < i)
		{
			ptr[k] = s1[k];
		}
		if (k >= i)
		{
			ptr[k] = s2[j];
			j++;
		}
		k++;
	}
	ptr[k] = '\0';
	return (ptr);

}
