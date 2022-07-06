#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * prints 10 times alphabet in lowercase
 */
void print_alphabet_x10(void)
{
int i;
int a;
for (a = 0; a < 10; a++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
