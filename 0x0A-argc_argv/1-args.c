#include <stdio.h>

/**
 * main - Entry point
 * function to print number of arguments passed into it
 * @argc: argc parameter(arg count)
 * @argv: argv parameter(arg vector)
 * Return: on Success 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	(void)argv;
	while (--argc)
	{
		sum++;
	}
	printf("%i\n", sum);
	return (0);
}
