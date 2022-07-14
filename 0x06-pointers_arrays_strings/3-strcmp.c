#include "main.h"
#include <string.h>

/**
 * _strcmp - Entry point
 * function that compares two strings
 * @s1: pointer parameter 1
 * @s2: pointer parameter 2
 * Return: on Success - string
 */
int _strcmp(char *s1, char *s2)
{
	int s3;

	s3 = strcmp(s1, s2);
	return (s3);
}
