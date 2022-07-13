#include "main.h"
#include <string.h>
/**
 * puts2 - Entry point
 * function that prints every other character of a string
 * @str: parameter of a pointer
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
