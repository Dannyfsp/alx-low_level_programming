#include "main.h"

/**
 * _pow_recursion - Entry point
 * function that returns the value of x raised to the power of y
 * @x: x ^ y
 * @y: power number
 * Return: on Success - power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
