#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Entry point
 * function that numbers
 * @seperator: string
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{	
	unsigned int i;
	int num;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (i < (n - 1) && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(numbers);
}
