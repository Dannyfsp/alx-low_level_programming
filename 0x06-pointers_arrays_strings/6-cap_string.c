#include "main.h"

/**
 * cap_string - Entry point
 * function that capitalize all words of a string
 * @ch: string parameter
 * Return: on Success - capitalized string
 */
char *cap_string(char *ch)
{
	char sep[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0;
	int i;

	while (ch[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || ch[a - 1] == sep[i]) && (ch[a] >= 97 && ch[a] <= 122))
			{
				ch[a] = ch[a] - 32;
			}
			i++;
		}
		a++;
	}
	return (ch);
}
