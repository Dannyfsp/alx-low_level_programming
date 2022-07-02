#include <stdio.h>
/**
 * main - Entry point
 * prints alphabets in loweercase using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10); /*10 is an Ascii code for a new line*/
return (0);
}
