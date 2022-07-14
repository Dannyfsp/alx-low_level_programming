#include "main.h"

/**
 * leet - Entry point
 * function that encodes a string
 * @ch: string parameter
 * Return: on Success - encoded string
 */
char *leet(char *ch)
{
int a = 0, b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'};
char trw[5] = {'4', '3', '0', '7', '1'};

while (ch[a])
{
b = 0;
while (b < l)
{
if (ch[a] == tr[b] || ch[a] - 32 == tr[b])
{
ch[a] = trw[b];
}
b++;
}
a++;
}
return (ch);
}
