#include "main.h"

/**
 * get_endianness - Entry point
 * function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *ch = (char *)&i;

	if (*ch)
		return (1);
	return (0);
}
