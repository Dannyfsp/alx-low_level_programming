#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program that multiplies two numbers
 * @argc: argc parameter(arg count)
 * @argv: argv parameter(arg vector)
 * Return: on Success 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%i\n", num1 * num2);
		return (0);
	}
	printf("Error\n");
	return (1);
}
