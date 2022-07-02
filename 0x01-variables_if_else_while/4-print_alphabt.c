#include <stdio.h>
/**
 * main - Entry point
 * pirnts alphabets in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q'; &&ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
