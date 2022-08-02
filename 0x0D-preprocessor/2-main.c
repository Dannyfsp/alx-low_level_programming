#include <stdio.h>

/**
 * main - Entry point
 * program that prints the name of the file it was compiled from
 * Return: on Success 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
