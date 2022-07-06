#include "main.h"
/**
 * print_last_digit - Entry point
 * print last digit of a number
 * @n: parameter passed
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;
return (n % 10);
}
