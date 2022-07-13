#include "main.h"

/**
 * _atoi - Entry point
 * function that converts a string to an integer
 * @s: the pointer parameter to convert
 * Return: on Success - an integer
 */
int _atoi(char *s)
{
	int a;
	unsigned int nah = 0;
	int min = 1;
	int sec = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= 1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			sec = 1;
			nah = (nah * 10) + (s[a] - '0');
			a++;
		}
		if (sec == 1)
		{
			break;
		}
	}
	nah *= min;
	return (nah);
}
