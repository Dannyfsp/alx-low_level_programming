#include "main.h"

/**
 * _puts - Entry point
 * function that prints a string
 * @str: parameter of a pointer
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n')
}
