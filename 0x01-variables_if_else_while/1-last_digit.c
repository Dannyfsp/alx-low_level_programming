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
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
{
printf("Last digit of %d is %d is greater than 5\n", n, m);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", n, m);
}
else
{
printf("Last digit of %d is %d and is less than 6 not 0\n", n, m);
}
return (0);
}
