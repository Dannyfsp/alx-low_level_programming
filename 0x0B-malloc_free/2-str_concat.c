#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Entry point
 * function that concatenates two strings
 * @s1: string parameter1
 * @s2: string parameter2
 * Return: on Success - s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n;
	char *newstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	n = string_length(s1) + string_length(s2) + 1;
	newstr = malloc(sizeof(char) * n);
	if (newstr == NULL)
	{
		return (NULL);
	}
	/* insert s1 into the new string */
	while (s1[i] != '\0')
	{
		newstr[j] = s1[i];
		i++;
		j++;
	}
	/* insert s2 into the new string */
	while (s2[i] != '\0')
	{
		newstr[j] = s2[i];
		i++;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}

/**
 * string_length - finds length of string
 * @ptr: pointer parameter
 * Return: on Success - length of string
 */
int string_length(char *ptr)
{
	int c = 0;

	while (*(ptr + c) != '\0')
	{
		c++;
	}
	return (c);
}
