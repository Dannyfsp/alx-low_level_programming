#include "main.h"

/**
 * clear_bit - Entry point
 * function that sets the value of a bit to 0 at a given index
 * @n: address of n
 * @index: position
 * Return: 1 if it worked or -1 if error occur
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
