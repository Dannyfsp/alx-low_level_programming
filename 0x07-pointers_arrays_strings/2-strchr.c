#include "main.h"

/**
 * _strchr - Entry point
 * function that locates a character in a string
 * @s: string parameter
 * @c: character parameter
 * Return: on Success - string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
