#include <stdio.h>
/**
 * main - Entry point
 * pirnts alphabets in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
char xyz;
for (xyz = 'a'; xyz <= 'z'; xyz++)
{
if (xyz != 'q' &&xyz != 'e')
{
putchar(xyz);
}
}
putchar('\n');
return (0);
}
