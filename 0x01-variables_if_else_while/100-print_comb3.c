#include <stdio.h>
/**
 * main -Entry point
 * print all possible different combinations of two digits
 * return: Always 0
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
if (x != 57 || i != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
