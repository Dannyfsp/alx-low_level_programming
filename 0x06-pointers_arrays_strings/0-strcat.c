#include "main.h"

/**
 * _strcat - Entry point
 * function that concatenates two strings
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 * Return: on Success - dest string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; scr[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
