#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Entry point
 * function that concatenate all arguments of the program
 * @ac: number of arguments passed to the program
 * @av: array of pointers to the arguments
 * Return: on Success - NULL if ac == 0 or av == NULL
 * also returns a pointer to the string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			str[index++] = av[arg][byte];
		}
		str[index++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
