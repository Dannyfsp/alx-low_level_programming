#include "main.h"
#include <string.h>
/**
 * rev_string - Entry point
 * function reversing a string
 * @s: parameter of a pointer
 */
void rev_string(char *s)
{
	char str;
	int i, len1, len2;

	len1 = 0;
	len2 = 0;
	while (s[len1] != '\0')
		len1++;

	len2 = len1 - 1;
	for (i = 0; i < len1 / 2; i++)
	{
		str = s[i];
		s[i] = s[len2];
		s[len2] = str;
		len2 -= 1;
	}
}
