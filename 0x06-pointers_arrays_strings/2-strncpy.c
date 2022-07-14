#include "main.h"
#include <string.h>

/**
 * _strncpy - Entry point
 * function that copies a string
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 * @n: parameter 3
 * Return: on Success -copies of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
