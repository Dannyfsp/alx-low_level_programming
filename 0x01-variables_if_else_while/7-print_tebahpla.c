#include <stdio.h>
/**
 * main - Entry point
 * print lowercase in reverse
 * Return: Always 0
 */
int main(void)
{
char xyz;
for (xyz = 'z'; xyz >= 'a'; xyz--)
{
putchar(xyz);
}
putchar(10);
return (0);
}
