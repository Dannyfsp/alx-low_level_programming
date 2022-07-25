#include <stdio.h>

/**
 * main - Entry point
 * function to print it's name
 * @argc: argc parameter
 * @argv: argv parameter - array of command
 * Return: on Success 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
