#include "main.h"
/**
 * times_table - Entry point
 * prints 9 times table
 */
void times_table(void)
{
int a, b;
for (a = 0; a < 9; a++)
{
for (b = 0; b <= 9; b++)
{
if (a < 9)
{
_putchar('0');
_putchar(',');
}
else if (a >= 9)
{
_putchar(a / 9);
_putchar((a % 9);
}
if (b < 9)
{
_putchar(':');
_putchar('0');
_putchar(b + '0');
}
else if (b >= 10)
{
_putchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
}
}
}
}
