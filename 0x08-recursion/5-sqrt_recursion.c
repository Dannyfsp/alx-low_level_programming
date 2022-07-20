#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - Entry point
 * function that returns the natural square root of a number
 * @n: number parameter
 * Return: on Success - square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator parameter
 * Return: on Success - number
 */
int _sqrt(int n, int i)
{
	int sq = i * i;

	if (sq > n)
	{
		return (-1);
	}
	if (sq == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
