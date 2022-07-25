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
	int result, firstNum, secondNum;

	if (argc != 3)
	{
		printf("%s\n", "Error");
	}
	firstNum = atoi(argv[1]);
	secondNum = atoi(argv[2]);
	result = firstNum * secondNum;

	printf("%d\n", result);
	return (0);
}
