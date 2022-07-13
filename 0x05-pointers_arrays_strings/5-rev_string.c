#include "main.h"
#include <string.h>
/**
 * print_rev - Entry point
 * function that prints a string in reverse
 * @s: parameter of a pointer
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		_putchar(10);
	}
}
