#include "main.h"
#include <stdlib.h>

/**
 * strlen - returns length of a string
 * @s: string parameter
 * Return: length of string
 */
int strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * str_concat - Entry point
 * function that concatenates two strings
 * @s1: string parameter1
 * @s2: string parameter2
 * Return: on Success - s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cat, *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	cat = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (!cat)
	{
		return (NULL);
	}
	concat = cat;
	while (*s1)
	{
		*concat = *s1;
		concat++;
		s1++;
	}
	while (*s2)
	{
		*concat = *s2;
		concat++;
		s2++;
	}
	*concat = '\0';
	return (cat);

}
