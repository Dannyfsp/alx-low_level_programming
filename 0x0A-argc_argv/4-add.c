#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * program that adds positive numbers
 * @argc: argc parameter(arg count)
 * @argv: argv parameter(arg vector)
 * Return: on Success 0
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					return (printf("Error\n"), 1);
				}
			}
			result += atoi(argv[i]);
		}
	}
	printf("%i\n", result);
	return (0);
}
