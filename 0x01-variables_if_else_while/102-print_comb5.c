#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combination of two two-digit numbers i.e in pair
 * return: Always 0
 */
int main(void)
{
int x;
int i;
for (x = 0; i <= 99; i++)
{
for (x = i; x <= 99; x++)
{
if (x != i)
{
putchar(i / 10 + 48);
putchar(i % 10 + 48);
putchar(' ');
putchar(x / 10 + 48);
putchar(x % 10 + 48);
if (i = 100 + x != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar(10);
return (0);
}
