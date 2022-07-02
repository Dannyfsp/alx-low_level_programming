#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point (assignment of a random no to n each time is executed)
 * prints out the last digit of the no stored in n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = 98;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("0");
}
if (n < 0 && n != 0)
{
printf("less than 6 not 0");
}
return (0);
}
