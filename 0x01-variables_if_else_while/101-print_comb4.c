#include <stdio.h>
/**
 * main - Entry point
 * print all possible different combination of three digits
 * Return: Always 0
 */
int main(void)
{
int x;
int i;
int a;
for (x = 48; x < 58; x++)
{
for (i = x; i < 58; i++)
{
for (a = i; a < 58; a++)
{
if (x == i || i == a || x == a)
{
continue;
}
putchar(x);
putchar(i);
putchar(a);
if (x == 55 && i == 56 && a == 57)
{
break;
}
else
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
