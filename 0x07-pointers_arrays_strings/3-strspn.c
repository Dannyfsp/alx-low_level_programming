#include "main.h"

/**
 * _strspn - Entry point
 * function that gets the length of a prefix substring
 * @s: string parameter (source)
 * @accept: accepted string parameter
 * Return: on Success - number of bytes in the initial segment of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	return (k);
}
