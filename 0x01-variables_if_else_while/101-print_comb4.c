#include <stdio.h>
/**
 * main - Entry point
 * print all possible different combination of three digits
 * return: Always 0
 */
int main(void)
{
int x;
int i;
int a;
for (x = 48; x <= 57; x++)
{
for (i = 49; i <= 57; i++)
{
for (a = 50; a <= 57; i++)
{
if (i > x && a > i)
{
putchar(x);
putchar(i);
putchar(a);
if (x != 55 || i !=56 || a != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar(10);
return (0);
}
