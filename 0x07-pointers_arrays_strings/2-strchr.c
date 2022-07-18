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

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
