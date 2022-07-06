#include "main.h"
/**
 * _isalpha - Entry point
 * checks for alphabetic character
 * @c: argument for a character
 * Return: returns 1 and 0 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
