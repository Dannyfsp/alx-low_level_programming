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
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf("Last digit of %d is %d is greater than 5\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
else
{
printf("Last digit of %d is %d and is less than 6 not 0\n", n, last);
}
return (0);
}
