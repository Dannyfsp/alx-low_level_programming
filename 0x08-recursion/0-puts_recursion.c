#include "main.h"

/**
 * _puts_recursion - Entry point
 * function that prints string followed by  new line
 * @s: string parameter
 * Return: on Success 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
