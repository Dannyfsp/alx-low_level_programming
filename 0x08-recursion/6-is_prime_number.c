#include "main.h"

int prime(int, int);

/**
 * is_prime_number - Entry point
 * function that identifies prime numbers
 * @n: number parameter
 * Return: on Success - an integer
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - checking prime numbers
 * @n: number
 * @i: iterator parameter
 * Return: on Success - 1 or 0
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
