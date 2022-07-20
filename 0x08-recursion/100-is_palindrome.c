#include "main.h"

int palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Entry point
 * function that checks if string is a palindrome
 * @s: string parameter
 * Return: on Success - 1 if palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string parameter
 * Return: on Success - length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checking for palindrome
 * @s: string parameter
 * @i: interator parameter
 * @len: length of string
 * Return: on Success - 1 if palindrome. 0 if not.
 */
int palindrome(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (palindrome(s, i + 1, len - 1));
}
