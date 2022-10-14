#include "main.h"

/**
 * _strlen_recursion - find the length of a string
 * @s: the string which length to be found
 *
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != 0)
	{
		l++;
		return (l + _strlen_recursion(s + l));
	}
	return (1);
}
/**
 * pal_check - checks palindrome
 * @s: string to be checked
 * @l: string length
 *
 * Return: 1 if it is palindrome or 0 if otherwise
 */
int pal_check(char *s, int l)
{
	if (l <= 1)
		return (1);
	if (*s != s[l - 1])
		return (0);
	else
		return (pal_check((s + 1), (1 - 2)));
}

/**
 * is_palindrome - function that checks for a palindrome
 * @s: string to be checked
 *
 * Return: 1 if string is palindrome or 0 if otherwise
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	return (pal_check(s, l));
}
