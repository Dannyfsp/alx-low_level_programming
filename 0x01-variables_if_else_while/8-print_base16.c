#include <stdio>
/**
 * main - Entry point
 * print all numbers of base 16 in lowercase
 * Retunr: Always 0
 */
int main(void)
{
int i;
char xyz;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (xyz = 'a'; xyz = 'f'; xyz++)
{
putchar(xyz);
}
putchar(10);
return (0);
}
