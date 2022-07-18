#include "main.h"

/**
 * _strpbrk - Entry point
 * function that searches a string for any set of bytes
 * @s: string parameter (source)
 * @accept: accepted character parameter
 * Return: on Success - s that matches one of the bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
