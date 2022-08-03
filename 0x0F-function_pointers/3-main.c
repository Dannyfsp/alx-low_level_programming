#include "3-calc.h"

/**
 * main - Entry point
 * function that performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to argument
 * Return: on Success 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[3]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", f(a, b);
	return (0);
}
