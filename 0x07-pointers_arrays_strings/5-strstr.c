#include "main.h"

/**
 * _strstr - Entry point
 * function that locates a substring
 * @haystack: string to search
 * @needle: string to find
 * Return: on Success - value of char
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				{
					break;
				}
				j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
