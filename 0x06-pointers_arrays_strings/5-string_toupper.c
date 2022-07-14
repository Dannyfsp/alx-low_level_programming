#include "main.h"

/**
 * string_toupper - Entry point
 * function that changes all lowercase letters of a string to uppercase
 * @ch: string parameter
 * Return: on Success - string
 */
char *string_toupper(char *ch)
{
	int i = 0;

	while (ch[i])
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = ch[i] - 32;
		}
		i++;
	}
	return (ch);
}
