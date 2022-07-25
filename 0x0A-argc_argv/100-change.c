#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argc parameter(arg count)
 * @argv: argv parameter(arg vector)
 * Return: on Success 0
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coins[j])
		{
			i -= coins[j];
			result++;
		}
	}
	printf("%i\n", result);
	return (0);
}
