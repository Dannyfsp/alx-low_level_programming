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
for (x = 48; x <= 57; x++)
{
for (i = 48; i <= 57; i++)
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
putchar(10);
return (0);
}
