#include <stdio.h>

/**
 * first - Entry point
 * prints a sentence before the main function is executed
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back my back!\n");
}
