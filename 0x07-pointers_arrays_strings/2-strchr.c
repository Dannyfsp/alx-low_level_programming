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
	int i;

	while (n)
	{
		i = *s++;
		if (i == c)
		{
			return (s - n);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
