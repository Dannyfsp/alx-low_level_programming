#include "main.h"

/**
 * flip_bits - Entry point
 * function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int counter = 0;

	while (i > 0)
	{
		counter++;
		i &= (i - 1);
	}
	return (counter);
}
