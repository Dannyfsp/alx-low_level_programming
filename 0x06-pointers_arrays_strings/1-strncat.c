#include "main.h"
#include <string.h>

/**
 * _strncat - Entry point
 * function that concatenates two strings using n bytes
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 * @n: parameter 3
 * Return: on Success - string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
