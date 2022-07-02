#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combination of single-digit number
 * Return: Always 0
 */
int main(void)
{
int xyz;
for (xyz = 48; xyz <= 57; xyz++)
{
putchar(xyz);
if (xyz != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
