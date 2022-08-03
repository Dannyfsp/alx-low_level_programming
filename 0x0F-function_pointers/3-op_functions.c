#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add parameter a and b
 * @a: parameter a
 * @b: parameter b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract parameter a and b
 * @a: parameter a
 * @b: parameter b
 * Return: substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies parameter a and b
 * @a: parameter a
 * @b: parameter b
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: parameter a
 * @b: parameter b
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division of a and b
 * @a: parameter a
 * @b: parameter b
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
