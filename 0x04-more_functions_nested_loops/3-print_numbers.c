#include "main.h"

/**
 * print_numbers - Entry point
 * a function that prints numbers from 0 to 9
 * Return: On success digit
 */
void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
_putchar(i + '0');
_putchar('\n');
}
