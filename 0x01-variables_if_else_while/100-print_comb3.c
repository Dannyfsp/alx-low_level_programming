#include <stdio.h>
/**
 * main -Entry point
 * print all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
int i;
for (x = 48; x <= 57; x++)
{
for (i = 49; i <= 57; i++)
{
if (i > x)
{
putchar(x);
putchar(i);
if (x != 56 || i != 57)
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
