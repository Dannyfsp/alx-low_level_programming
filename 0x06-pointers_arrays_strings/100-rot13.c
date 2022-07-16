#include "main.h"

/**
 * rot13 - Entry point
 * function that encodes a string using rot13
 * @ch: string parameter
 * Return: on Success - encoded string
 */
char *rot13(char *ch)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = ch;

	while (*ch)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*ch == rot13[i])
			{
				*ch = ROT13[i];
				break;
			}
		}
		ch++;
	}
	return (p);
}
