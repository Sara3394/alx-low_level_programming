#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char type pointer argument
 *
 * Return: pointer s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	s++;
	return ((1) + _strlen_recursion(s));
}
