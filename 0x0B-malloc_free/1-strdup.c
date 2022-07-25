#include "main.h"

/**
 * _strdup - Entry point
 * function that returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string parameter (to be duplicated)
 * Return: on Success - a pointer of string
 */
char *_strdup(char *str)
{
	int i = 1;
	int j = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	ptr = (char *)malloc(i * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
